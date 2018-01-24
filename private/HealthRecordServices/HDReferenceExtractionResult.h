//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSNumber, NSURL;

@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_completeResources;
    NSArray *_incompleteResources;
    NSArray *_unresolvableReferences;
    NSURL *_nextSearchResultURL;
    NSNumber *_rulesVersion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *rulesVersion; // @synthesize rulesVersion=_rulesVersion;
@property(readonly, copy, nonatomic) NSURL *nextSearchResultURL; // @synthesize nextSearchResultURL=_nextSearchResultURL;
@property(readonly, copy, nonatomic) NSArray *unresolvableReferences; // @synthesize unresolvableReferences=_unresolvableReferences;
@property(readonly, copy, nonatomic) NSArray *incompleteResources; // @synthesize incompleteResources=_incompleteResources;
@property(readonly, copy, nonatomic) NSArray *completeResources; // @synthesize completeResources=_completeResources;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompleteResources:(id)arg1 incompleteResources:(id)arg2 unresolvableReferences:(id)arg3 nextSearchResultURL:(id)arg4 rulesVersion:(id)arg5;

@end

