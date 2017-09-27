//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKStyleList, IKViewElementStyle;

@interface IKViewElementStyleComposer : NSObject
{
    _Bool _requiresMediaQueryEvaluation;
    _Bool _compositionDone;
    IKViewElementStyleComposer *_defaultStyleComposer;
    IKViewElementStyleComposer *_parentStyleComposer;
    IKStyleList *_styleList;
    IKViewElementStyle *_elementStyleOverrides;
    IKViewElementStyle *_composedSansDefaultStyle;
    IKViewElementStyle *_composedStyle;
}

+ (id)styleComposerWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;
@property(nonatomic, getter=isCompositionDone) _Bool compositionDone; // @synthesize compositionDone=_compositionDone;
@property(retain, nonatomic) IKViewElementStyle *composedStyle; // @synthesize composedStyle=_composedStyle;
@property(retain, nonatomic) IKViewElementStyle *composedSansDefaultStyle; // @synthesize composedSansDefaultStyle=_composedSansDefaultStyle;
@property(readonly, retain, nonatomic) IKViewElementStyle *elementStyleOverrides; // @synthesize elementStyleOverrides=_elementStyleOverrides;
@property(readonly, retain, nonatomic) IKStyleList *styleList; // @synthesize styleList=_styleList;
@property(readonly, retain, nonatomic) IKViewElementStyleComposer *parentStyleComposer; // @synthesize parentStyleComposer=_parentStyleComposer;
@property(readonly, retain, nonatomic) IKViewElementStyleComposer *defaultStyleComposer; // @synthesize defaultStyleComposer=_defaultStyleComposer;
@property(readonly, nonatomic) _Bool requiresMediaQueryEvaluation; // @synthesize requiresMediaQueryEvaluation=_requiresMediaQueryEvaluation;
- (void).cxx_destruct;
- (void)_composeWithMediaQueryEvaluator:(id)arg1;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg1;
- (id)consolidatedDefaultStyleList;
- (void)setNeedsRecomposition;
- (id)composedStyleWithMediaQueryEvaluator:(id)arg1;
- (id)initWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;

@end

