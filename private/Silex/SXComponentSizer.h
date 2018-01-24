//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SXComponentStyle, SXDocumentController, SXLayoutAttributes;

@interface SXComponentSizer : NSObject
{
    id <SXComponent> _component;
    id <SXComponentLayout> _componentLayout;
    SXComponentStyle *_componentStyle;
    SXDocumentController *_documentController;
    SXLayoutAttributes *_layoutAttributes;
    NSMutableDictionary *_infoForRendering;
    struct CGSize _suggestedSize;
}

@property(readonly, nonatomic) NSMutableDictionary *infoForRendering; // @synthesize infoForRendering=_infoForRendering;
@property(retain, nonatomic) SXLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) struct CGSize suggestedSize; // @synthesize suggestedSize=_suggestedSize;
@property(readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property(readonly, nonatomic) SXComponentStyle *componentStyle; // @synthesize componentStyle=_componentStyle;
@property(readonly, nonatomic) id <SXComponentLayout> componentLayout; // @synthesize componentLayout=_componentLayout;
@property(readonly, nonatomic) id <SXComponent> component; // @synthesize component=_component;
- (void).cxx_destruct;
- (void)saveInfo:(id)arg1 forRenderingPhaseWithIdentifier:(id)arg2;
- (struct UIEdgeInsets)contentInsetsForSize:(struct CGSize)arg1;
- (struct CGRect)contentFrameForSize:(struct CGSize)arg1 contentInsets:(struct UIEdgeInsets)arg2;
- (long long)minimumColumnLength;
- (struct _NSRange)overrideColumnLayoutForColumnRange:(struct _NSRange)arg1 inColumnLayout:(id)arg2;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (_Bool)allowComponentIntersection;
- (id)snapLines;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5;

@end

