//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface NEFilterVerdict : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _shouldReport;
    _Bool _needRules;
    _Bool _drop;
    _Bool _remediate;
    _Bool _urlAppendString;
    NSString *_remediationURLMapKey;
    NSString *_remediationButtonTextMapKey;
    NSString *_urlAppendStringMapKey;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSString *urlAppendStringMapKey; // @synthesize urlAppendStringMapKey=_urlAppendStringMapKey;
@property(retain) NSString *remediationButtonTextMapKey; // @synthesize remediationButtonTextMapKey=_remediationButtonTextMapKey;
@property(retain) NSString *remediationURLMapKey; // @synthesize remediationURLMapKey=_remediationURLMapKey;
@property _Bool urlAppendString; // @synthesize urlAppendString=_urlAppendString;
@property _Bool remediate; // @synthesize remediate=_remediate;
@property _Bool drop; // @synthesize drop=_drop;
@property _Bool needRules; // @synthesize needRules=_needRules;
@property _Bool shouldReport; // @synthesize shouldReport=_shouldReport;
- (void).cxx_destruct;
- (id)initWithDrop:(_Bool)arg1 remediate:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

