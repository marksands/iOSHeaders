//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTWPTokenAttachment.h>

@class NSString, TSTReferenceNode, TSUColor;
@protocol TSTCanvasReferenceProvider;

__attribute__((visibility("hidden")))
@interface TSTCompletionToken : TSTWPTokenAttachment
{
    NSString *mCompletionText;
    struct _NSRange mPrefixRange;
    int mRenderAsTokenType;
    TSTReferenceNode *mEditingReferenceNode;
    TSUColor *mReferenceColor;
    id <TSTCanvasReferenceProvider> mCanvasReferenceProvider;
}

@property(nonatomic) id <TSTCanvasReferenceProvider> canvasReferenceProvider; // @synthesize canvasReferenceProvider=mCanvasReferenceProvider;
@property(retain, nonatomic) TSUColor *referenceColor; // @synthesize referenceColor=mReferenceColor;
@property(retain, nonatomic) TSTReferenceNode *editingReferenceNode; // @synthesize editingReferenceNode=mEditingReferenceNode;
@property(readonly, nonatomic) int renderAsTokenType; // @synthesize renderAsTokenType=mRenderAsTokenType;
@property(nonatomic) struct _NSRange prefixRange; // @synthesize prefixRange=mPrefixRange;
@property(retain, nonatomic) NSString *completionText; // @synthesize completionText=mCompletionText;
- (id)description;
- (void)p_createCanvasReference;
- (void)p_removeCanvasReference;
- (void)saveToArchive:(struct CompletionTokenAttachmentArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CompletionTokenAttachmentArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 completionText:(id)arg2;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)makeTokenReflectChoice:(id)arg1;
- (id)tokenText;
- (void)setExpressionNode:(id)arg1;

@end

