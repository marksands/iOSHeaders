//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject
{
    NSFileHandle *_recFileHandle;
    struct _mxnetTools_recordHeader_t_ _recordHeader;
    unsigned long long _currentOffset;
    NSMutableArray *_labelsPrivate;
    struct _mxnetTools_imageHeader_t_ _imageHeader;
}

@property(retain) NSMutableArray *labelsPrivate; // @synthesize labelsPrivate=_labelsPrivate;
@property unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property struct _mxnetTools_imageHeader_t_ imageHeader; // @synthesize imageHeader=_imageHeader;
@property struct _mxnetTools_recordHeader_t_ recordHeader; // @synthesize recordHeader=_recordHeader;
@property(retain) NSFileHandle *recFileHandle; // @synthesize recFileHandle=_recFileHandle;
- (void).cxx_destruct;
- (struct _mxnetTools_imageID_t_)imageID;
- (id)labels;
- (id)imageData;
- (_Bool)nextRecordAndError:(id *)arg1;
- (_Bool)seekRecordWithID:(struct _mxnetTools_imageID_t_ *)arg1 error:(id *)arg2;
- (id)initWithRecFile:(id)arg1 error:(id *)arg2;

@end

