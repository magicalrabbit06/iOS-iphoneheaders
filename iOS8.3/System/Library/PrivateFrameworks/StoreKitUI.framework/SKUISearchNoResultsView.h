/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIButton;

@interface SKUISearchNoResultsView : UIView {

	UIImageView* _imageView;
	UILabel* _label;
	UIButton* _button;

}

@property (nonatomic,readonly) UIButton * button;              //@synthesize button=_button - In the implementation block
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMessageWithSearchTerm:(id)arg1 spellCorrectedTerm:(id)arg2 clientContext:(id)arg3 ;
@end
