//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATOperation.h"

@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation
{
    _Bool _parseImage;
    CRKBook *_book;
    NSString *_filePath;
}

@property(readonly, nonatomic) _Bool parseImage; // @synthesize parseImage=_parseImage;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) CRKBook *book; // @synthesize book=_book;
- (void).cxx_destruct;
- (void)main;
- (id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(_Bool)arg3;

@end

