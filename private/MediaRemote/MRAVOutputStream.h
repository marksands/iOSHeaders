//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class AVOutputContext, AVOutputContextCommunicationChannel;

@interface MRAVOutputStream : MRAVBufferedOutputStream
{
    AVOutputContextCommunicationChannel *_communicationChannel;
    _Bool _channelIsOpen;
    AVOutputContext *_outputContext;
}

@property(readonly, nonatomic) AVOutputContextCommunicationChannel *communicationChannel; // @synthesize communicationChannel=_communicationChannel;
@property(readonly, nonatomic) AVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
- (void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToMemory;
- (id)initWithCommunicationChannel:(id)arg1;
- (id)initWithOutputContext:(id)arg1;

@end

