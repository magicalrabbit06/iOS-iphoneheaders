/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GAXSpringboardServer/GAXSBWorkspaceOverride_super.h>

@interface GAXSBWorkspaceOverride : GAXSBWorkspaceOverride_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)workspace:(id)arg1 handleStatusBarReturnActionFromApplication:(id)arg2 statusBarStyle:(id)arg3 ;
-(int)workspace:(id)arg1 canOpenApplication:(id)arg2 ;
-(void)workspace:(id)arg1 handleOpenApplicationRequest:(id)arg2 withOptions:(id)arg3 origin:(id)arg4 withResult:(/*^block*/ id)arg5 ;
-(void)workspace:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 withOptions:(id)arg4 origin:(id)arg5 withResult:(/*^block*/ id)arg6 ;
@end

