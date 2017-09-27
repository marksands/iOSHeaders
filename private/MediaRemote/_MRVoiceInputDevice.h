//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying>
{
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;
    unsigned int _deviceID;
    int _recordingState;
    struct {
        unsigned int deviceID:1;
        unsigned int recordingState:1;
    } _has;
}

@property(retain, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) unsigned int deviceID; // @synthesize deviceID=_deviceID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRecordingState:(id)arg1;
- (id)recordingStateAsString:(int)arg1;
@property(nonatomic) _Bool hasRecordingState;
@property(nonatomic) int recordingState; // @synthesize recordingState=_recordingState;
@property(readonly, nonatomic) _Bool hasDescriptor;
@property(nonatomic) _Bool hasDeviceID;
- (void)dealloc;

@end

