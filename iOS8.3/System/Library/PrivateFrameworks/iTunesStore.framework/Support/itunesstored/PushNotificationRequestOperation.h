/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSVPushNotificationParameters, SSURLConnectionResponse, NSString;

@interface PushNotificationRequestOperation : ISOperation {

	SSVPushNotificationParameters* _parameters;
	SSURLConnectionResponse* _response;
	NSString* _userAgent;

}

@property (copy) NSString * userAgent; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(char)_loadResponseWithAccountIdentifier:(id)arg1 URL:(id)arg2 error:(id*)arg3 ;
-(NSString *)userAgent;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(SSURLConnectionResponse *)URLResponse;
-(id)initWithPushNotificationParameters:(id)arg1 ;
@end

