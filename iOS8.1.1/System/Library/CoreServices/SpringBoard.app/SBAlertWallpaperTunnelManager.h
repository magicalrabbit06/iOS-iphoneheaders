/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBAlertManagerObserver.h>

@class SBAlertManager, NSMapTable, NSMutableSet, NSString;

@interface SBAlertWallpaperTunnelManager : NSObject <SBAlertManagerObserver> {

	SBAlertManager* _alertManager;
	NSMapTable* _hiderToHideeMap;
	NSMutableSet* _hiddenAlerts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerAlertManager:(id)arg1 forScreen:(id)arg2 ;
+(id)sharedInstance;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)pushTunnelToWallpaperForAlert:(id)arg1 ;
-(void)popTunnelToWallpaperForAlert:(id)arg1 ;
-(void)_setAlertManager:(id)arg1 ;
-(void)_hideAlerts:(id)arg1 onBehalfOfAlert:(id)arg2 ;
-(void)_stopHidingAlertsForAlert:(id)arg1 ;
-(void)_adjustHiddenAlerts;
-(id)dumpTunnelState;
-(void)dealloc;
-(id)init;
-(void)_showAlert:(id)arg1 ;
-(void)_hideAlert:(id)arg1 ;
@end
