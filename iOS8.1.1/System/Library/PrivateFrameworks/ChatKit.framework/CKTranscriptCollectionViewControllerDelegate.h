/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>
@required
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;

@end
