//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSFormMetadataController.h"

@class WebScriptWorld;

@interface WBUFormMetadataControllerWK1 : WBSFormMetadataController
{
    WebScriptWorld *_scriptWorld;
}

+ (id)sharedFormMetadataController;
- (void).cxx_destruct;
- (_Bool)shouldAttemptToClassifyFormsWithoutAPasswordFieldAsLoginForms;
- (void)clearScriptWorld;
@property(readonly, nonatomic) WebScriptWorld *scriptWorld; // @synthesize scriptWorld=_scriptWorld;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;

@end

