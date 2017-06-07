//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CHRecognitionSessionResult, NSArray;
@protocol CHRecognitionSessionTaskDelegate, CHStrokeProvider, OS_dispatch_queue;

@interface CHRecognitionSessionTask : NSObject
{
    _Bool _cancelled;
    _Bool _saveInputDrawings;
    id <CHRecognitionSessionTaskDelegate> _delegate;
    NSArray *_locales;
    CHRecognitionSessionResult *_outputResult;
    id <CHStrokeProvider> __strokeProvider;
    CHRecognitionSessionResult *__inputResult;
    NSObject<OS_dispatch_queue> *__recognizersQueue;
}

@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *_recognizersQueue; // @synthesize _recognizersQueue=__recognizersQueue;
@property(readonly, retain, nonatomic) CHRecognitionSessionResult *_inputResult; // @synthesize _inputResult=__inputResult;
@property(readonly, retain, nonatomic) id <CHStrokeProvider> _strokeProvider; // @synthesize _strokeProvider=__strokeProvider;
@property(retain, nonatomic, setter=_setOutputResult:) CHRecognitionSessionResult *outputResult; // @synthesize outputResult=_outputResult;
@property(nonatomic) _Bool saveInputDrawings; // @synthesize saveInputDrawings=_saveInputDrawings;
@property(readonly, copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(nonatomic) id <CHRecognitionSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
- (id)_recognitionResultsFromLocaleResults:(id)arg1 inputStrokeIdentifiers:(id)arg2 inputDrawing:(id)arg3 cutPoints:(id)arg4;
- (id)_recognitionResultsForStrokeGroup:(id)arg1 groupingStrategy:(id)arg2;
- (void)_logResultsIfAppropriateWithStrokeProvider:(id)arg1;
- (void)cancel;
- (void)main;
- (void)dealloc;
- (id)initWithLocales:(id)arg1 strokeProvider:(id)arg2 inputResult:(id)arg3;
- (id)init;

@end

