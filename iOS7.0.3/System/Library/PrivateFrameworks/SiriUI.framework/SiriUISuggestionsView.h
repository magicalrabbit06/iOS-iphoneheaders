/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SiriUISuggestionsViewDelegate;
@class UILabel, NSArray, NSTimer, NSMutableOrderedSet, NSString, UIColor;

@interface SiriUISuggestionsView : UIView {

	UILabel* _headerLabel;
	UILabel* _oldHeaderLabel;
	UILabel* _subHeaderLabel;
	NSArray* _suggestionLabels;
	NSArray* _oldSuggestionLabels;
	BOOL _firstSuggestionPresentation;
	NSTimer* _updateSuggestionsTimer;
	NSMutableOrderedSet* _pendedSuggestions;
	NSString* _headerText;
	NSString* _subHeaderText;
	UIColor* _textColor;
	<SiriUISuggestionsViewDelegate>* _delegate;
	int _orientation;
	CGPoint _contentOffset;

}

@property (nonatomic,copy) NSString * headerText;                                            //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) NSString * subHeaderText;                                         //@synthesize subHeaderText=_subHeaderText - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                                          //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic,__weak) <SiriUISuggestionsViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int orientation;                                                //@synthesize orientation=_orientation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(int)orientation;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffset;
-(void)setTextColor:(id)arg1 ;
-(id)textColor;
-(void)setOrientation:(int)arg1 ;
-(float)_headerFontSize;
-(float)_subHeaderFontSize;
-(unsigned)maxSuggestions;
-(float)_suggestionFontSize;
-(float)_headerLabelDistanceToTop;
-(float)_headerLineHeight;
-(float)_headerToSubHeaderOffset;
-(float)_suggestionLabelDistanceToTop;
-(float)_suggestionSpacing;
-(void)_animateHeaderOut;
-(void)_animateHeaderIn;
-(void)_loadSubHeaderViewIfNeeded;
-(void)_loadSuggestionsViewsIfNeeded;
-(void)_animateOutSuggestionAtIndex:(unsigned)arg1 ;
-(void)_animateInSuggestionAtIndex:(unsigned)arg1 ;
-(void)_updateSuggestions;
-(void)_setSuggestionTexts:(id)arg1 ;
-(BOOL)_isPortrait;
-(void)animateOutWithCompletion:(/*^block*/ id)arg1 ;
-(void)setHeaderText:(id)arg1 ;
-(void)setSubHeaderText:(id)arg1 ;
-(void)startSuggesting;
-(void)stopSuggesting;
-(void)clearCurrentSuggestions;
-(float)_suggestionLineHeight;
-(id)headerText;
-(id)subHeaderText;
-(void).cxx_destruct;
@end

