//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskActiveStreamDependencyInfo : NSObject
{
    NSNumber *_streamID;
    NSMutableDictionary *_mainDocumentTaskURLs;
    NSMutableDictionary *_mainDocumentTaskMimeTypes;
}

@property(retain, nonatomic) NSMutableDictionary *_mainDocumentTaskMimeTypes; // @synthesize _mainDocumentTaskMimeTypes;
@property(retain, nonatomic) NSMutableDictionary *_mainDocumentTaskURLs; // @synthesize _mainDocumentTaskURLs;
@property(retain, nonatomic) NSNumber *_streamID; // @synthesize _streamID;
- (_Bool)isEmpty;
- (void)removeStreamWithStreamID:(id)arg1 requestURLString:(id)arg2;
- (int)parentStreamIDForMimeType:(id)arg1;
- (int)parentStreamIDForURLString:(id)arg1;
- (void)addNewStreamID:(id)arg1 requestURLString:(id)arg2;
- (void)dealloc;
- (id)initWithStreamID:(id)arg1 requestURLString:(id)arg2 dependencyInfo:(id)arg3;
- (id)init;

@end

