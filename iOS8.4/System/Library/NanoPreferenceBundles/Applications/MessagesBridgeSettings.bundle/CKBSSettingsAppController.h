/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/MessagesBridgeSettings.bundle/MessagesBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class NSArray, NPSDomainAccessor, NPSManager;

@interface CKBSSettingsAppController : BPSNotificationAppController {

	NSArray* _nanoSpecifiers;
	NSArray* _alertSpecifiers;
	NSArray* _mirroredSpecifiers;
	NPSDomainAccessor* _domainAccessor;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) NSArray * nanoSpecifiers;                        //@synthesize nanoSpecifiers=_nanoSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * alertSpecifiers;                       //@synthesize alertSpecifiers=_alertSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * mirroredSpecifiers;                    //@synthesize mirroredSpecifiers=_mirroredSpecifiers - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                        //@synthesize syncManager=_syncManager - In the implementation block
-(NSArray *)alertSpecifiers;
-(NSArray *)mirroredSpecifiers;
-(NSArray *)nanoSpecifiers;
-(id)_mirroringReadReceiptsString;
-(void)setAlertSpecifiers:(NSArray *)arg1 ;
-(id)_mirroringRepeatAlertsString;
-(void)setMirroredSpecifiers:(NSArray *)arg1 ;
-(void)setNanoSpecifiers:(NSArray *)arg1 ;
-(id)_mirroredAlertStringFromAlertCount:(long long)arg1 ;
-(long long)_validateMirroredAlertCount:(long long)arg1 ;
-(id)dictationMode;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setDictationMode:(id)arg1 specifier:(id)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(id)applicationBundleIdentifier;
-(id)notificationApplicationSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)mirroredApplicationGroupSpecifiers;
-(id)localizedPaneTitle;
-(void)mirrorSettingsChanged:(BOOL)arg1 ;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(NPSManager *)syncManager;
-(int)alertType;
@end

