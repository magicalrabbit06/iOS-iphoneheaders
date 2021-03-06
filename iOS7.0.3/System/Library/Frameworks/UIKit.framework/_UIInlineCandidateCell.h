/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface _UIInlineCandidateCell : UIView {

	NSString* _candidate;
	unsigned _index;
	UIFont* _font;
	CGSize _stringImageSize;
	BOOL _highlighted;
	id _target;
	SEL _action;
	BOOL _lastItem;
	BOOL _dontDrawRightEdge;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(unsigned)index;
-(id)initWithCandidate:(id)arg1 andIndex:(unsigned)arg2 withFontSize:(float)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(CGSize)stringImageSize;
-(void)setLastItem:(BOOL)arg1 ;
-(void)dontDrawRightEdge:(BOOL)arg1 ;
@end

