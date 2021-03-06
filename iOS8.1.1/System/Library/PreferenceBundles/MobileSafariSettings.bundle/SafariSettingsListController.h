/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <Preferences/PSListController.h>

@interface SafariSettingsListController : PSListController
-(void)postDistributedNotificationNamed:(CFStringRef)arg1 ;
-(id)safariDefaultsValueForKey:(id)arg1 ;
-(void)setSafariDefaultsValue:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeSafariDefaults;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
@end

