//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface CKGenericCondition : NSObject
{
    // Error parsing type: , name: type
    // Error parsing type: , name: negated
    // Error parsing type: , name: sql.storage
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (_Bool)evaluateOn:(id)arg1;
@property(nonatomic, copy) NSString *sql;
- (id)or:(id)arg1;
- (id)and:(id)arg1;
- (id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(_Bool)arg3;
- (id)initWithValue:(_Bool)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSPredicate *predicate;

@end

