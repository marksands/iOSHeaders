//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKVersionedDocument.h>

@class PKDrawing;

@interface PKDrawingVersionedDocument : PKVersionedDocument
{
    PKDrawing *_drawing;
}

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
- (void).cxx_destruct;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (id)initWithData:(id)arg1;

@end

