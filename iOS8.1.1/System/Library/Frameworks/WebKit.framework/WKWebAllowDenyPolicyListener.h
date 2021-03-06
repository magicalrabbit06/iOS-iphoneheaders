/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebAllowDenyPolicyListener.h>

@class NSString;

@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener> {

	RefPtr<WebKit::GeolocationPermissionRequestProxy>* _permissionRequestProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)allow;
-(void)deny;
-(BOOL)shouldClearCache;
-(id)initWithPermissionRequestProxy:(PassRefPtr<WebKit::GeolocationPermissionRequestProxy>*)arg1 ;
-(void)denyOnlyThisRequest;
@end

