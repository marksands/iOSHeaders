//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKAnnotation, CHRecognitionResult, PKDrawing, UIBezierPath;

@interface AKShapeToCHRecognitionResult : NSObject
{
    _Bool _doodlePathIsPrestroked;
    long long _tag;
    CHRecognitionResult *_result;
    UIBezierPath *_doodlePath;
    PKDrawing *_inkDrawing;
    AKAnnotation *_annotation;
    struct CGRect _doodlePathBoundsInInputView;
}

@property _Bool doodlePathIsPrestroked; // @synthesize doodlePathIsPrestroked=_doodlePathIsPrestroked;
@property struct CGRect doodlePathBoundsInInputView; // @synthesize doodlePathBoundsInInputView=_doodlePathBoundsInInputView;
@property(retain) AKAnnotation *annotation; // @synthesize annotation=_annotation;
@property(retain) PKDrawing *inkDrawing; // @synthesize inkDrawing=_inkDrawing;
@property(retain) UIBezierPath *doodlePath; // @synthesize doodlePath=_doodlePath;
@property(retain) CHRecognitionResult *result; // @synthesize result=_result;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)initWith:(long long)arg1 result:(id)arg2;

@end

