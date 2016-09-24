/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSData * _accessToken;
    BOOL  _allowAccess;
    BRCDocumentItem * _document;
    NSString * _referenceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithItem:(id)arg1 allowAccess:(BOOL)arg2;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;

@end