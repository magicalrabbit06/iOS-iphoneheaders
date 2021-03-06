/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UISegmentedControl.h>
#import <iTunesStoreUI/SUDeferredUIView.h>

@class NSMutableArray;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {

	CGRect _deferredFrame;
	double _deferredMaxTotalWidth;
	double _deferredMinSegmentWidth;
	NSMutableArray* _deferredSegments;
	long long _deferredSegmentedControlStyle;
	unsigned long long _deferredSelectedSegmentIndex;
	bool _deferredSizeToFit;
	bool _isDeferringInterfaceUpdates;

}

@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) bool deferringInterfaceUpdates; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)sizeToFit;
-(void)setSegmentedControlStyle:(long long)arg1 ;
-(void)removeAllSegments;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)segmentedControlStyle;
-(void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3 ;
-(void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3 ;
-(void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(bool)arg2 ;
-(void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)titleForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)imageForSegmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSegments;
-(long long)selectedSegmentIndex;
-(bool)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(bool)arg1 ;
-(void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
-(void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_saveSegmentsAsDeferred;
@end

