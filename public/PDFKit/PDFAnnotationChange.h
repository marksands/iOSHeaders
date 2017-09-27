//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDFAnnotation, PDFAnnotationChangePrivate;

__attribute__((visibility("hidden")))
@interface PDFAnnotationChange : NSObject
{
    PDFAnnotationChangePrivate *_private;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned long long changeTimestamp;
@property(readonly, retain, nonatomic) PDFAnnotation *annotation;
@property(readonly, nonatomic) int changeType;
- (id)initWithReorderedAndChangedAnnotation:(id)arg1;
- (id)initWithReorderedAnnotation:(id)arg1;
- (id)initWithRemovedAnnotation:(id)arg1;
- (id)initWithChangedAnnotation:(id)arg1;
- (id)initWithAddedAnnotation:(id)arg1;

@end

