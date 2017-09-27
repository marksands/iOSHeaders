//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel
{
    ICDrawingVersionedDocument *_drawingDocument;
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)previewItemURL;
- (id)previewItemTitle;
- (id)previewImageURL;
- (_Bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (long long)previewImageOrientation;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (void)drawingPreviewIsUpToDate;
- (_Bool)showThumbnailInNoteList;
- (_Bool)supportsQuickLook;
- (_Bool)canSaveURL;
- (id)saveURL;
- (_Bool)hasPreviews;
- (void)writeMergeableData;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (id)sharedDrawingController;
- (id)drawingDocument;
@property(readonly, nonatomic) ICDrawing *drawing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

@end

