//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADLineJoin.h>

__attribute__((visibility("hidden")))
@interface OADMiterLineJoin : OADLineJoin
{
    float mLimit;
    unsigned int mIsLimitOverridden:1;
}

+ (id)defaultProperties;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isLimitOverridden;
- (void)setLimit:(float)arg1;
- (float)limit;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

