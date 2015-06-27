/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebNotificationPrivate;

@interface WebNotification : NSObject {

	WebNotificationPrivate* _private;

}
-(id)init;
-(id)title;
-(id)tag;
-(id)origin;
-(id)body;
-(unsigned long long)notificationID;
-(id)iconURL;
-(id)dir;
-(id)lang;
-(void)dispatchShowEvent;
-(void)dispatchCloseEvent;
-(void)dispatchClickEvent;
-(void)dispatchErrorEvent;
@end
