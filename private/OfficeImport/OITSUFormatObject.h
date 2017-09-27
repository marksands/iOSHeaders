//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

__attribute__((visibility("hidden")))
@interface OITSUFormatObject : NSObject <NSCopying, NSMutableCopying>
{
    CDStruct_730f14de mFormatStruct;
    _Bool mUseExpandedContents;
}

+ (id)defaultDurationFormat;
+ (id)defaultDateFormat:(id)arg1;
@property(readonly, nonatomic) _Bool useExpandedContents; // @synthesize useExpandedContents=mUseExpandedContents;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)p_setFormatStruct:(CDStruct_730f14de)arg1;
@property(readonly, nonatomic) CDStruct_730f14de formatStruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1;
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1 useExpandedContents:(_Bool)arg2;
- (id)init;

@end

