//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TPRenderingExporter.h>

#import "TSKEncryptedDocumentExporter.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TPPdfExporter : TPRenderingExporter <TSKEncryptedDocumentExporter>
{
    NSDictionary *mOptions;
}

- (void).cxx_destruct;
- (void)setOptions:(id)arg1;
- (_Bool)validatePassphrases:(id *)arg1;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (id)p_renderingExporterDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

