/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:24:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface MPUSeparatorView : UIView {

	float _leftMarginWidth;
	UIColor* _marginColor;
	float _rightMarginWidth;
	UIColor* _separatorColor;

}

@property (assign,nonatomic) float leftMarginWidth;                 //@synthesize leftMarginWidth=_leftMarginWidth - In the implementation block
@property (nonatomic,retain) UIColor * marginColor;                 //@synthesize marginColor=_marginColor - In the implementation block
@property (assign,nonatomic) float rightMarginWidth;                //@synthesize rightMarginWidth=_rightMarginWidth - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;              //@synthesize separatorColor=_separatorColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setLeftMarginWidth:(float)arg1 ;
-(void)setMarginColor:(UIColor *)arg1 ;
-(void)setRightMarginWidth:(float)arg1 ;
-(float)leftMarginWidth;
-(UIColor *)marginColor;
-(float)rightMarginWidth;
@end
