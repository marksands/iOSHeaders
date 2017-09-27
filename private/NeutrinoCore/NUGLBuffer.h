//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

@class NSMutableIndexSet;

@interface NUGLBuffer : NUGLObject
{
    NSMutableIndexSet *_validRegion;
    unsigned int _target;
    unsigned int _usage;
    long long _size;
}

@property(nonatomic) unsigned int usage; // @synthesize usage=_usage;
@property(nonatomic) unsigned int target; // @synthesize target=_target;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)validateDataInRange:(struct _NSRange)arg1;
- (void)invalidateDataInRange:(struct _NSRange)arg1;
- (void)invalidateData;
- (_Bool)hasNoValidDataOutsideOfRange:(struct _NSRange)arg1;
- (_Bool)hasNoValidData;
- (_Bool)hasValidDataInRange:(struct _NSRange)arg1;
- (_Bool)hasValidData;
- (void)updateTexture:(id)arg1 inRect:(CDStruct_996ac03c)arg2 context:(id)arg3;
- (void)copyTexture:(id)arg1 inRect:(CDStruct_996ac03c)arg2 context:(id)arg3;
- (void)_writeDataInRange:(struct _NSRange)arg1 options:(unsigned int)arg2 context:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)writeDataInRange:(struct _NSRange)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)writeDataWithContext:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)readDataInRange:(struct _NSRange)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)readDataWithContext:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (id)description;
- (id)initWithSize:(long long)arg1;
- (id)init;

@end

