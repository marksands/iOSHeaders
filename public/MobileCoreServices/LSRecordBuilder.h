//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface LSRecordBuilder : NSObject
{
    // Error parsing type: ^{LSDatabase={__CFRuntimeBase=QAQ}^{LSDBImpl}^{__CSStore}{LSSchema=I{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}I}{?=II}IIII{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}}[12{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}^{?}^{?}IC}]IIIIIII^{_LSSchemaCache}}}, name: _db
}

+ (id)recordBuilderForType:(unsigned long long)arg1;
- (unsigned int)createStringFrom:(id)arg1 lowercase:(_Bool)arg2;
- (id)retainURL:(id)arg1;
- (id)retainDictionary:(id)arg1;
- (id)retainArray:(id)arg1;
- (id)retainNumber:(id)arg1;
- (id)retainString:(id)arg1;
- (_Bool)parseInstallationInfo:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (_Bool)parseInfoPlist:(id)arg1;
-     // Error parsing type: I32@0:8^{LSDatabase={__CFRuntimeBase=QAQ}^{LSDBImpl}^{__CSStore}{LSSchema=I{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}I}{?=II}IIII{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}}[12{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}^{?}^{?}IC}]IIIIIII^{_LSSchemaCache}}}16^@24, name: registerBundleRecord:error:
-     // Error parsing type: v24@0:8^{LSDatabase={__CFRuntimeBase=QAQ}^{LSDBImpl}^{__CSStore}{LSSchema=I{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}I}{?=II}IIII{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}}[12{?={CSMap=I{CSMapCallbacks=^?^?^?^?^?^?}^{CSMapContext}{os_unfair_lock_s=I}I^{_CSMapHeader}^I^I}^{?}^{?}IC}]IIIIIII^{_LSSchemaCache}}}16, name: setDatabase:

@end

