/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIInternalEvent.h>

@interface UIMoveEvent : UIInternalEvent {

	long long _moveDirection;

}

@property (assign,setter=_setMoveDirection:,nonatomic) long long _moveDirection;              //@synthesize moveDirection=_moveDirection - In the implementation block
-(long long)type;
-(void)_setMoveDirection:(long long)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
-(long long)_moveDirection;
@end

