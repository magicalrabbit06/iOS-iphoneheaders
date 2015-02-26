/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSCopying.h>

@class NSString, NSArray, NSPredicate;

@interface NSExpression : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedExpressionFlags : 31;
	}  _expressionFlags;
	unsigned reserved;
	unsigned long long _expressionType;

}

@property (readonly) unsigned long long expressionType; 
@property (retain,readonly) id constantValue; 
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSString * function; 
@property (copy,readonly) NSString * variable; 
@property (copy,readonly) NSExpression * operand; 
@property (copy,readonly) NSArray * arguments; 
@property (retain,readonly) id collection; 
@property (copy,readonly) NSPredicate * predicate; 
@property (copy,readonly) NSExpression * leftExpression; 
@property (copy,readonly) NSExpression * rightExpression; 
@property (copy,readonly) id expressionBlock; 
+(id)expressionWithCKDPRecordFieldValue:(id)arg1 translator:(id)arg2 ;
+(id)_newKeyPathExpressionForString:(id)arg1 ;
+(id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
+(id)expressionForVariable:(id)arg1 ;
+(id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
+(id)expressionWithFormat:(id)arg1 ;
+(id)expressionWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)expressionForSymbolicString:(id)arg1 ;
+(id)expressionForAggregate:(id)arg1 ;
+(id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2 ;
+(id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
+(id)expressionForUnionSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForIntersectSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForMinusSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForBlock:(/*^block*/id)arg1 arguments:(id)arg2 ;
+(id)expressionForAnyKey;
+(BOOL)supportsSecureCoding;
+(id)expressionForConstantValue:(id)arg1 ;
+(id)expressionForKeyPath:(id)arg1 ;
+(id)expressionForFunction:(id)arg1 arguments:(id)arg2 ;
+(id)expressionForEvaluatedObject;
-(id)CKExpressionValue;
-(id)minimalFormInContext:(id)arg1 ;
-(void)allowEvaluation;
-(NSExpression *)operand;
-(id)collection;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)initWithExpressionType:(unsigned long long)arg1 ;
-(id)predicateFormat;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)trueExpression;
-(id)falseExpression;
-(BOOL)_allowsEvaluation;
-(id)subexpression;
-(id)expressionBlock;
-(BOOL)_shouldUseParensWithDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(NSString *)keyPath;
-(NSPredicate *)predicate;
-(NSString *)variable;
-(NSExpression *)leftExpression;
-(NSExpression *)rightExpression;
-(unsigned long long)expressionType;
-(NSString *)function;
-(id)constantValue;
-(NSArray *)arguments;
@end
