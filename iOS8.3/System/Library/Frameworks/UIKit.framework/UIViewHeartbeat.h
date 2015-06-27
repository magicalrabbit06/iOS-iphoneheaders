/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:31 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, CADisplayLink;

@interface UIViewHeartbeat : NSObject {

	UIView* _view;
	SEL _selector;
	CADisplayLink* _heartbeat;

}
+(void)startHeartbeatWithView:(id)arg1 selector:(SEL)arg2 inRunLoopMode:(id)arg3 ;
+(void)stopHeartbeatWithView:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(void)_updateDisplayLink:(id)arg1 ;
@end
