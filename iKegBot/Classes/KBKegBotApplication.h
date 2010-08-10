//
//  KBKegBotApplication.h
//  KegBot
//
//  Created by Gabriel Handford on 8/9/10.
//  Copyright 2010 Yelp. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import "KBKegProcessor.h"

@protocol KBKegBotApplicationDelegate <UIApplicationDelegate>
- (KBKegProcessor *)kegProcessor;
- (void)playSystemSoundGlass;
@end

/*!
 Main application instance, provides access to shared instances via KBKegBotApplicationDelegate.
 */
@interface KBKegBotApplication : UIApplication { }

+ (NSObject<KBKegBotApplicationDelegate> *)sharedDelegate;

+ (void)setSharedDelegate:(NSObject<KBKegBotApplicationDelegate> *)sharedDelegate;

+ (KBKegProcessor *)kegProcessor;

+ (KBDataStore *)dataStore;

@end
