//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QLPrintSession : NSObject
{
    struct CGDataProvider *_dataProvider;
    struct CGPDFDocument *_pdfDocumentRef;
    struct CGSize _printSize;
}

@property(nonatomic) struct CGPDFDocument *pdfDocumentRef; // @synthesize pdfDocumentRef=_pdfDocumentRef;
@property(nonatomic) struct CGDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property struct CGSize printSize; // @synthesize printSize=_printSize;
- (void)dealloc;

@end

