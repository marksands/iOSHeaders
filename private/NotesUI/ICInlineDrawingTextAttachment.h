//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesUI/ICBaseTextAttachment.h>

@class ICInlineDrawingChangeCoalescer;

@interface ICInlineDrawingTextAttachment : ICBaseTextAttachment
{
    ICInlineDrawingChangeCoalescer *_changeCoalescer;
}

@property(retain, nonatomic) ICInlineDrawingChangeCoalescer *changeCoalescer; // @synthesize changeCoalescer=_changeCoalescer;
- (void).cxx_destruct;
- (void)drawingDataDidChange:(id)arg1;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)printableTextAttachment;
- (id)attachmentAsNSTextAttachment;
- (id)contents;
- (void)saveIfNeeded;

@end

