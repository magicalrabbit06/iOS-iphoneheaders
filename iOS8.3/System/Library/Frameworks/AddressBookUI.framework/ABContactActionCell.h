/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:34:58 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABLabeledCell.h>

@class UILabel, ABTransportButton, ABCardActionGroupItem, ABContactAction;

@interface ABContactActionCell : ABLabeledCell {

	UILabel* _label;
	ABTransportButton* _transportIcon;

}

@property (nonatomic,readonly) ABCardActionGroupItem * actionGroupItem; 
@property (nonatomic,readonly) ABContactAction * action; 
@property (nonatomic,retain) UILabel * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) ABTransportButton * transportIcon;                      //@synthesize transportIcon=_transportIcon - In the implementation block
-(void)setTransportIcon:(ABTransportButton *)arg1 ;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(ABTransportButton *)transportIcon;
-(ABCardActionGroupItem *)actionGroupItem;
-(id)variableConstraints;
-(id)labelView;
-(float)minCellHeight;
-(void)dealloc;
-(ABContactAction *)action;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(char)shouldPerformDefaultAction;
@end
