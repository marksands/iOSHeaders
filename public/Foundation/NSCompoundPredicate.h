//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@class NSArray;

@interface NSCompoundPredicate : NSPredicate
{
    void *_reserved2;
    unsigned long long _type;
    NSArray *_subpredicates;
}

+ (_Bool)supportsSecureCoding;
+ (id)_operatorForType:(unsigned long long)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)andPredicateWithSubpredicates:(id)arg1;
- (id)predicateOperator;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)_subpredicateDescription:(id)arg1;
@property(readonly, copy) NSArray *subpredicates;
- (id)_predicateOperator;
@property(readonly) unsigned long long compoundPredicateType;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (id)generateMetadataDescription;

@end

