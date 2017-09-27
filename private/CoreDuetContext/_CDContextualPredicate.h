//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSPredicate, NSSet;

@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_keyPaths;
    NSPredicate *_predicate;
}

+ (_Bool)supportsSecureCoding;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2;
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateForChangeAtKeyPaths:(id)arg1;
+ (id)predicateForChangeAtKeyPath:(id)arg1;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSSet *keyPaths; // @synthesize keyPaths=_keyPaths;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)evaluateWithObject:(id)arg1;
@property(readonly, nonatomic) _Bool firesOnAnyChange;

@end

