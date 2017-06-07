//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

#import <OfficeImport/CMMapperRoot-Protocol.h>

@class CMArchiveManager, NSMutableArray, NSString, OIXMLDocument, OIXMLElement, PDPresentation;

__attribute__((visibility("hidden")))
@interface PMPresentationMapper : CMMapper <CMMapperRoot>
{
    int mWidth;
    PDPresentation *mPresentation;
    NSMutableArray *mSlideNames;
    NSMutableArray *mSlideGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    CMArchiveManager *mArchiver;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    unsigned int mNextCommit;
    unsigned int mCurrentSlide;
    _Bool mHasPushedFirstSlides;
}

- (void).cxx_destruct;
- (void)finishMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;
- (void)_pushEmptySlideWithMessage:(id)arg1;
- (void)startMappingWithState:(id)arg1;
- (struct CGSize)slideSize;
- (struct CGSize)pageSizeForDevice;
- (id)documentTitle;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)archiver;
- (void)dealloc;
- (id)initWithPDPresentation:(id)arg1 archiver:(id)arg2;
- (void)setHtmlDocumentSizeInArchiver;

@end

