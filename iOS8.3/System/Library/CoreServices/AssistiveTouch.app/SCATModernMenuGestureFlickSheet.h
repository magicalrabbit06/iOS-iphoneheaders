/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:17:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuFlickItemsViewDelegate;
@interface SCATModernMenuGestureFlickSheet : SCATModernMenuGesturesSheetBase {

	id<SCATMenuFlickItemsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuFlickItemsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(void)setDelegate:(id<SCATMenuFlickItemsViewDelegate>)arg1 ;
-(id<SCATMenuFlickItemsViewDelegate>)delegate;
@end
