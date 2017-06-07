//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MFMessageCriterionConverterDelegate;

@interface MFMessageCriterionConverter : NSObject
{
    id <MFMessageCriterionConverterDelegate> _delegate;
}

@property(nonatomic) __weak id <MFMessageCriterionConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)messageCriterionFromPredicateFormatString:(id)arg1;
- (id)messageCriterionFromPredicate:(id)arg1;
- (id)_messageCriterionForCompoundPredicate:(id)arg1;
- (id)_messageCriterionForComparisonPredicate:(id)arg1;
- (long long)_criterionTypeFromExpression:(id)arg1;
- (long long)_criterionTypeForKey:(id)arg1;
- (long long)_defaultCriterionTypeForKey:(id)arg1;
- (id)predicateFromMessageCriterion:(id)arg1;
- (id)_searchPredicateForCriterion:(id)arg1;
- (id)_predicateKeysForCriterion:(long long)arg1;
- (id)_defaultKeysForCriterionType:(long long)arg1;
- (id)_orPredicateForAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3;
- (id)_predicateForKey:(id)arg1 value:(id)arg2 qualifier:(int)arg3;
- (unsigned long long)_proposedPredicateOperatorType:(unsigned long long)arg1 forKey:(id)arg2;
- (id)_simplifiedCompoundPredicateOfType:(unsigned long long)arg1 forSubqueries:(id)arg2;

@end

