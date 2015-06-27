/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperationGetCandidates.h>

@class NSArray;

@interface TIWordSearchPinyinOperationGetCandidates : TIWordSearchOperationGetCandidates {

	NSArray* _initiallyHiddenCandidates;
	unsigned _selectedHiddenCandidateIndex;

}

@property (nonatomic,retain,readonly) NSArray * initiallyHiddenCandidates;              //@synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates - In the implementation block
@property (nonatomic,readonly) unsigned selectedHiddenCandidateIndex;                   //@synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex - In the implementation block
-(void)dealloc;
-(unsigned)selectedHiddenCandidateIndex;
-(NSArray *)initiallyHiddenCandidates;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned)arg4 predictionEnabled:(char)arg5 reanalysisMode:(char)arg6 target:(id)arg7 action:(SEL)arg8 geometryModelData:(id)arg9 candidateContext:(id)arg10 stringContext:(id)arg11 ;
@end
