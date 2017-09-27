//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SGDuplicateKey, SGRecordId;

@interface SGContactDetail : NSObject <NSCopying>
{
    NSString *_normalizedValue;
    SGRecordId *_recordId;
    unsigned long long _type;
    NSString *_value;
    NSString *_label;
    unsigned long long _extractionType;
    NSString *_sourceKey;
    NSString *_context;
    SGDuplicateKey *_duplicateKey;
}

+ (id)contactDetailFromEntity:(id)arg1;
+ (id)contactDetail:(id)arg1 label:(id)arg2 type:(unsigned long long)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionType:(unsigned long long)arg8;
@property(readonly, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(readonly, nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToContactDetail:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)loadOrigin:(id)arg1;
@property(readonly, nonatomic) NSString *normalizedValue;
- (id)initWithValue:(id)arg1 label:(id)arg2 type:(unsigned long long)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionType:(unsigned long long)arg8;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

