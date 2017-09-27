//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

#import "CMMapperRoot.h"

@class CMArchiveManager, NSString, WDDocument;

@interface WMDocumentMapper : CMMapper <CMMapperRoot>
{
    CMArchiveManager *mArchiver;
    WDDocument *wDom;
    NSString *mFileName;
}

@property(retain) NSString *fileName; // @synthesize fileName=mFileName;
- (void).cxx_destruct;
- (struct CGSize)contentSizeForDevice;
- (struct CGSize)pageSizeForDevice;
- (id)documentTitle;
- (id)styleMatrix;
- (id)archiver;
- (void)mapWithState:(id)arg1;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (int)defaultTabWidth;
- (id)blipAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithWDom:(id)arg1 archiver:(id)arg2;
- (double)bottomMargin;
- (double)headerMargin;
- (double)topMargin;
- (double)rightMargin;
- (double)leftMargin;
- (_Bool)hasSessionBreakAtIndex:(unsigned long long)arg1;

@end

