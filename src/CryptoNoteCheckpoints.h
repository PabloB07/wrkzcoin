// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{0,"877e55b4e902b9bf4c9e0a7c16440f449339d56679c49d62261ae5c92596a6ce"},
{500,"8a7d72e82fa4104cd3fa00349e84148d7948a007ac2f62d53507d8939e8e0fea"},
{1000,"c9e495bff601f44e4ca60ce4d00d485ad8bd2667a6aef75d70d8416d38a99cda"},
{1500,"c4266151fa3bff7f0dea202dfe5543183c92a036246c6de5b05fda08c80cd99f"},
{2000,"57abdcc64975e704c0fcf26100d1f68a60cabea02e5fb0ec57c3658662f77869"},
{2500,"df90e532333253d89d50976689cf662e41d4595d32318917475b8c9266b8242b"},
{3000,"651be4161f06a96eedae077c6b05af879c7b8d8ff72312c81b519ee10375dd74"},
{3500,"a46e1da427eed90e16903fb652947350e6bb1174c338875191721da30d368476"},
{4000,"563c0d3b745836f214d5cee483b25e7a3e978b4dae4e4b464b956afed3d3f032"},
{4500,"25594abff3e3ec5f45988fa378126f68776009c5ea3b50a6915c8d5803eea56b"},
{5000,"a17de196aaf1fd574bddd58ccb8c167bff3d549a00f5d8c5da1b459bbedbcc51"},
{5500,"4562946aaa0274b20de935970a52ce5f88544cf286a21f6bd9fca05ad51515d8"},
{6000,"1962ffb8a45716e1ad0af0fd593ed739f6b222bd9f0df833ebe90fc6abb57427"},
{6500,"cab54b2732f673a9616826d00a63dbb10ed21509682da8b181c5a3430f9a196b"},
{7000,"1a554b0534a4afe3ad86793542a5e3717d907282c8b115ddb4f1c773d4cdbb30"},
{7500,"ba28f0b65f8aa438f7e3fb58d0c20c6a0d1ac78b9df221383e14b1d46927cccc"},
{8000,"80991425d3dda0c6d159a72eaabe726b30c03dfdec4657568b2c274b6bcd3a60"},
{8500,"a446eac98ea442162a0d273b114aaa8614557641a392eeb7473dcd8dae2f60f0"},
{9000,"adc6adc88de77daba831fabdbe11b87c00880ad04b662dd84c112a18c03e857f"},
{9500,"37d7f49bd233cfab62a9ad244f666f404f724f11969e4b7f2e8c63e708c32fef"},
{10000,"2c99b62958b0e05804249bab026847b8f7f5b01c925122db3ec198cff10590d1"},
{10500,"c4f73b77708c964ee92b3fd7e6cdbe4934ad10e1fdd944c41f29bc6aec96f7be"},
{11000,"5e844d328dd708ffe616ae9f0a88469303bb9505da66d81e6682f6e7d0c760c7"},
{11500,"44f649bafd3bde867775ea077513c48718865b39d0406cee1ecf3c3fb62f0916"},
{12000,"382b5545090e26ba702b83806afb2ba95a8845c3b4a9b4bb5509f2afa3f82aae"},
{12500,"b2885a5260c52aa6275f4e94d7ca5d23492de81062be57e4e8bef394a0d6af3b"},
{13000,"cb706499b175e49fb4fa50706c1c7dc8cd60a1cf602fb852ba00807a11205a31"},
{13500,"2eb97921736b70e16a2fd8f749d23b69604d8c2e50130ee944137cb677605719"},
{14000,"e7af87ad0b4605dcd57807eecc50c3d1f69c1f6c21d2da08b1f035f66a540f89"},
{14500,"ea92adc9b9467aef7f89f07b3523fedf989b9767e8177adfc9af85751899e89d"},
{15000,"74c0c3695d4a7305d6577f80ba4790500fe324689d59b0fae7022180098a21d1"},
{15500,"f7cd23485bc20c43922157c0b7154b740b992933eeb109dfa6d01a14cc8c98e3"},
{16000,"876aef492c0b1bbae4f6a5c27bb3de5b918bd6c22a5db54e1adaf19b7bbcb631"},
{16500,"0e7ba282a5789b402c41ebf44a10af7cc4a9c4364e0f3df300213da2814da0f5"},
{17000,"8e2e4464182b7001a5dd2577d333faa9c6838f6d7abec69ea8571a32aae30253"},
{17500,"c23e475d4b482042b07276855afc27563dc3267f70be444e73c0a4718a058ee2"},
{18000,"08df66d35a8e537b467d7c030bdefcd397a9025715807bb8235bce221c150033"},
{18500,"d90257a746655bcb91ac2f363e15c3db35250e96b658653e6f203ec645e6c691"},
{19000,"1d2a4ba2991b4bcfcea4984094a398fe6895c90a943184f0a1f0852ff2b3fca7"},
{19500,"f2133ed82971243a80a5bf9678ab46af493b6a317ff49a436d48ed6c4776571c"},
{20000,"72790e675dd68ac369af99058b962169a22c19308e783b9045a2071f292ef09d"},
{20500,"677c8a81f078903ad80a795cc4b785014492451c2f817ca1543859384882bbd3"},
{21000,"f0ee9c1724bbde155bac7f9d5f290eda64fc4202f26243b643d46323fc55618d"},
{21500,"09561b74b76cd71f0ad59ecb36e97e4942dbb1f8f01f1807b1c45821df3ef906"},
{22000,"07ba82ca8a0ce58689df2a39e4e4699ec43fab91112fd0fb54609c2feef12b54"},
{22500,"2ded7e8210ac4497737f351cb4b72bb3696c837c51a5bca4aa167a3aae7b1aea"},
{23000,"9e3910180614c1eecbdc13947b43735734ededd10b2554500d13027420449136"},
{23500,"8b553df3db87fe26ab58974c80a75d4e51afe1721884dbf34bf7575dd9451e4f"},
{24000,"7456869e7b67cc126db204f2318a07a9acc778d55a1f12952e8c88d5d4e13935"},
{24500,"3bf8757b18448440c9de5cafb37fef9e9dd624dbb1c047a24e6a05aabb0e0d81"},
{25000,"80ce89f332f1437c7eb3ec82aff3762aa1ce468cc80feb6c40f5490bb7d2c2bc"},
{25500,"dcca9ea905807fbf2e9792dc7d6673d3e484225bf8f7e2b2041624fcd570ef54"},
{26000,"b1d396aa8f42179720bab3dae3c212bfcc1f67e98f4da7bf95b082a66e47ce5e"},
{26500,"9f84fb2e76c39514560202a8cce65526d431dbe19ff8e4f62cfa16e8f1cc7dfc"},
{27000,"31d7d59eca8fff2906651d2ade5f637cb3012679d5b713a3078343a568f3f238"},
{27500,"cf49e97cf1a26e2c1f29341d23fa2ef59214f23d30b0337e58b3c95b1a90c3e1"},
{28000,"2be22ec9c0e9add57d83daa910b9f12fd492195e3521c4b8dc247b494f4b1dcc"},
{28500,"a90794c17e75ed2de4df303a6c1ca3f1c7b3c3608702428cf3ad0b20b1e5b2a6"},
{29000,"0b215b0b15e9edea2cd60a7644ee79b2f34e994446369c0b810935a7a6071dec"},
{29500,"86f4c2e463f1636da732c925c939867522cc6af035f7dc353a7dc257b1dad83c"},
{30000,"7285e80545b1fdaf88baa0a36a870946d3b614b67d33a7c2459f38dbb323b8d6"},
{30500,"e79eff0b9abe44836db67816b83630ac8d047a65050e30cae1fda5201115e525"},
{31000,"5bcf66ae338af1af8fa22e11387dd018b951b79932b9f5df0d5ea714097803a2"},
{31500,"d0e5f77e8e5347cbc55c83afaf7468ec1d220438289ccd1f45c162b3d9b473a2"},
{32000,"58253dddf5f3f2189eefcd1160f4d69298b392505e28a3803399e533401a5311"},
{32500,"94cf7ea8a10369f970a896219aad043776dd60f0c5fadb5d8d93946c03f92598"},
{33000,"a3883d31271caadb1454b308a7338713e554d53ebdcb9a0760ef025ad5b45075"},
{33500,"79526082630f8d742c11ea1d76eaaee21dbeb7bfa827e0edcf564670890a6ad5"},
{34000,"c2434a82aaaf3e35193409975edfca803a235dcae044c764e77fc6fa25113f0d"},
{34500,"180c1eb46562bd87c8d25caa350d5f79ce2438376a6a976e183352fe26a4cf9a"},
{35000,"e078b2ac10c23de9346b908751a1826ebd63e4323eaefd6da0ea8fcf07867ad5"},
{35500,"78056027318023e147840c1ca8b7edf3694600a76e7cbbed6a65275aa32620b6"},
{36000,"9496c62569d93490a00561a6df93627fa118d388d9d1cac4f2033adef605db92"},
{36500,"e8645889446a3d7da5bda97aef22063088442c40a710be4ba3ebd534bd2bbffb"},
{37000,"efc3c0f0e1fba96eb7aba61677bf9b238070870673a5855b47556c52f8220f4b"},
{37500,"3c4c3bcf06cc88ec08c82e41fa0a0479d87b4b53741b122736ded03284682737"},
{38000,"19bc317878914cdedc5a6a3dd1d89956d4a0c0793391f6861c055d4d712de335"},
{38500,"ec95904545cd3b66cd2bc011c2f4a59aff587e56e783bf28273bd4a055a8f051"},
{39000,"96b96c84ea5f85e74a6394a09318ea646126b5d27741b7afd38f5ff3353bf262"},
{39500,"5fec4bbac60b53af1fce20eab2471c26fe4445274720707ab57b71bb781673ba"},
{40000,"3b9418425260a9b8117c75bf915fa4bc3db27129f4ad100855b3333fb4ae5bd2"},
{40500,"4c8e2e9c91ac1be3aed9e2da4a2f875a722ee204176d5ad032a6c555ba0d7f82"},
{41000,"5c1c7c2ddfedc618137a4f7cfef55fea6934b5fe6d75f9e050dc7986253d9e76"},
{41500,"daff2c990d8810afe8fd09652d0540a9945211be8a86966f128381cde84f51d9"},
{42000,"ac02beadab5dbf3fa0366c739b7840a071428cad694c1b8a837eb4001880cb26"},
{42500,"5f20bf3cc5349432d9dba12ee8ccb8ccfd3c75f6d6d19d943efabd6a0ed2cd31"},
{43000,"3798444542d8cca911de4dbb26bb312c2645121c61e415116c390b2042aeb494"},
{43500,"4b5c248a47e61e39a5671acc466f8063a5069cc84fa2b7eda5a41ef4b85b6dff"},
{44000,"fb71a34b07e5deb7983b1fd9cdc080560c4aeb92f303a644d2f4ea369e92565b"},
{44500,"eebbb13efa2d4146045c65365c03e2248938b008810421483c9937751606b1b6"},
{45000,"94093218fb89b9ed7eef75b79f49e6d5bed9ca100a172a604d46d9cff4821595"},
{45500,"513e81959ff4164d8286dd43c37d83db6616aeec56586af016661f4201bc5ac0"},
{46000,"4edf4494cfd7ebede6ccdfde570c73391b728206d390ba5d9e68b2080eebee55"},
{46500,"9b27d17a453101bc958cedb6239a586dcc8af8dc4785f7aa6b5d424885855416"},
{47000,"cc540bef696467bc27ac8c2977c42c5a9dce4695222376fb0459161f4365ba32"},
{47500,"cb44c25bfe6247481785b9d6b247e40eb685bed46525a3a0cc782ed543f5ed92"},
{48000,"1afd53046709254520f90e4f2cb94e69c8bde596c7958f03fa595f03ab73d527"},
{48500,"80229063155333df4c18b893fe71e9ee60db4421f681856fb1ea8dc2979197b9"},
{49000,"6d08abc0a13bd2113f3a1708a916042f70f88570ce1156976e4aabf1a75b8388"},
{49500,"95271cd4b9d103a348af01cd742b37eed205e220328857d3682d77222cf56c82"},
{50000,"6dded54823e3302035f4044b29fc302971df36a86c13ce51a8882a9c9e953b68"},
{50500,"f7b31429a7d01668a5a3fdd4738f8177e92a05e268a60b90b6c4baff13232fe3"},
{51000,"73eb41ed2545fb0cd2e9e82015f54da254d9f21093201d63a6d09a2c32b41a2a"},
{51500,"173897e96915a14f231778230895bfab9172bc82bdb93b02e14374f38abe70d2"},
{52000,"be084fa3b4f3cada9a037660f4bb2f480a6772c568bfc26b330868a04af4d8ee"},
{52500,"3ac4f6e831db86499e70af67ccf0215010c7e6ec0e10aed426b4f74206e126b4"},
{53000,"94488fab1f46daef70c985326660233ecb4e1ea959fb2591d362c984a9ded32d"},
{53500,"132d76cd8e367cb5473740943cc9f7198c8af30fbec2dc06a80cd7a1e7ab82af"},
{54000,"88c13682d9e5a90cee5f4801ac1f92e13eb78e43ed11cba9e5a2451f91681c49"},
{54500,"f464ccacf04f28ba06f6d388b8641acda6248631fa3b0e8866ec457ab58dddaa"},
{55000,"f809319dc873beced66941f185de2f42585f53fdeb030aa473f55f19549a7bec"},
{55500,"e46fc996d20881261127652f78374edab9983f6a7709747ad40d9cfd20be50c2"},
{56000,"ef915907314196110680766807e1f993dffb3993b58b3e034b882bf6cd3ab2f5"},
{56500,"e6655db77fff8cbb5d727055c725f2bd98d6385c802e698edf30d9653a1ac965"},
{57000,"808cf7d9f203614352f6d1af05377c8160137be8d8ce74b2bdb94270aab28ad8"},
{57500,"71604fd77bd9c4ea1def3860f012b217a504affa4198c0b77f837c8cff2c0809"},
{58000,"ea1b6ead70eaba237396658d3df82a54824d60bcee9fba91f81e498f1ba819d2"},
{58500,"509ed76a272db13ee298de7088f868a00dc99f70e8fecfdb105a45e87d74a41f"},
{59000,"5df7e695946538795ac81eda555736c26f88b7dc2162a3b6b1af160f29ee61ce"},
{59500,"7f7e645ae7000a51a7ef855981cd0bdd3246efa799d303cb733a33ee28bbd0b9"},
{60000,"917d92d59b4ea2f60f046666cf36bf90fa1df871aebf8ff3b164cd6f62869499"},
{60500,"26654bc4f1acfed98607c1f65f1be7cadf701c29ffb53766b847ac3766b5c5fe"},
{61000,"83781ff5949aa55987608e375a6b6362000c3a901bafa6229d6c816c28cc3720"},
{61500,"8b23a506854542ac0825d92a658622ae24fc0f55b6993b937a2379267e6a87a8"},
{62000,"be197fd0038cdf0c3fad7bf1b17972061c602565b08f4df3875357eee0964d42"},
{62500,"0d5f11fc7dd3682b84b6e4afb66585637f03e89f9a204fe54be72b86c413ccfc"},
{63000,"6f7225ffb3db14ae5706b343ef44d2ef9a1f9c379b21a0d0f380f5b3df000ce0"},
{63500,"6e935f62c60cb36e2f96689983bea56fa6b1f66008d91533b775e73f58a2978c"},
{64000,"f669bf1522dfdb292bac0a229c672458929256633a280087b6ada485a4409181"},
{64500,"909a63563a36f880d4671e8de683f6f9b09d0fc7e0fb3485294ffdaf32e97786"},
{65000,"7ecaa8bafe4f91aeda9f2f3eb8a4fb3868af65607f06ad283c67889520fd798c"},
{65500,"92366545bf44b26abbb7f2c1daeae559fab6eb246721d653ddb02a8a494c5cd5"},
{66000,"ff8b6e2af6a21cfa76c764fefce6f932913a1a2feb6e8ec00a25cea1640f02aa"},
{66500,"d358c3bc78b02b6c85cedd0bfb21618fb606044add4d0c570796ffe06b7c739f"},
{67000,"545d9ff74b93a263e1963ff3ff6196e67750eed6414df03358292330476a12ef"},
{67500,"eea83790e33546ce6e3396b27c5b4109c2705b9568a65cc13789324616e6fa23"},
{68000,"a52c5d1b77fab897ff6c51a02165d2d5c6e843651d13f21332a8a523ac690b95"},
{68500,"cb22f67a21f6113fd22a99e7cb8fde0e7704854b75e982131696f165c231efa0"},
{69000,"bb37384f3e675b306594fe0874d8576eb48cc90b0111b76b78ca20318c9d7c46"},
{69500,"268a41644e2731235f03896532852a7c65c9ab0364a770e9266ffa560c92de1c"},
{70000,"0eae1266f5f8db19daa41247436cf6e2ecefea07ff695ec8f69798e1d461ceaf"},
{70500,"cb0452bbeb211eb1c70ec63006c7d9cdbb53efeffb76b7799e0a3ca1da15a887"},
{71000,"5eec16bf217fd3361ae857d0177f55d0ef2e76147940ca937b5f748e72ff064e"},
{71500,"e5aec8c4cdd740653bbaaddc1f501ab4830dc0fef79cae6b2dd652b2bcbf665d"},
{72000,"9cd331642b1c8963767523a2da99212035823c13c9538ef27a86c4ea3755780e"},
{72500,"5a343ee5d06289e83dcfcac9ebacfd02515407f8afd22b5c5db1d78c14ef224d"},
{73000,"fae6c0a87914bfea73dbff5c6043fcf7dd8964ca63a328121d33f4302e22a1a9"},
{73500,"75f50aa278dfc75f6d97911398f670ba21690bae064b9b9b6ac6719c513e8e1e"},
{74000,"06d7486c2311fe3736569f067178bd88e20673f5b74bfd1cfc61c0cad8bc20b8"},
{74500,"5eb8e8a89ff63b6abffecaaf33920f8c413e4b44f4717fe5cd1bbdd4cafce77c"},
{75000,"8fbc27f314d861822d9d069b721fe850d5e881cd03cc2f9cd18e23d000b48164"},
{75500,"2b92e9e18745e800d378cf7a53b9703a4e233de525cd2062ee13ff5343a4f78d"},
{76000,"2c6282665a082bda9f7c440096c2278577212a70fef7313bcb964cb9ea1b307c"},
{76500,"c94c84110d59d6cfb4c3d9692fc1fd5fe49c94e8b217968427c3378b85f669df"},
{77000,"a2d2555672979488e80aa2b0dad76dc126960f613490552e367d381892977012"},
{77500,"3f80d14d37a926e656d7f20ce765b75de5fa5ffc72a492772476469e962d21d7"},
{78000,"c5afb39e4b99f3ca643341e6ea1d82f3b245d31e0ac9f4c036a2680055dddd45"},
{78500,"39f3879e1c488a2414ea9c71740eb1b9d6cb99c83f0eef3a35c5293b60fe127e"},
{79000,"e95b4b315586cb6e53d017ee4ec87c554b3a617c91883ce0e7461ec3f04b3009"},
{79500,"26d844029e942c3db2fa91e9aab65e6fc5a558853faf9d4b41eb3a3b296cbc9c"},
{80000,"31e1ed21e54a652186ebe5b13adbb8508ffc6d6d8902e678146fd0910f8b9f01"},
{80500,"cde2a9cef6f9dd0df0feb10ba41d5e29ad4039d4d6cba41a4bd81431db9616e7"},
{81000,"2b7da029e4a1a9b4e285a21fcba87fb8c49a5c69335b23785df2f4513f092e41"},
{81500,"56db5ab0b0c76f88b1ecf8801b3e884e8f2667d08fd915fe32246491d0f8d88b"},
{82000,"f05476fbb1db280ca79cb5c5528df06d1ee7244bc48c28b664a5dac28b2720a6"},
{82500,"0dece2f3102a3ff7121f64f50e6e0c48384d6335088931079ae06c19644e214c"},
{83000,"3ea00a29e4bbf6fcc93ee023f7b5fccf007434211964effb58baa9f910d49d6b"},
{83500,"b242ddcd752b6f889b52612b304a519ea6bb1688b23277370aa21a3ed2bea4fc"},
{84000,"c07bcc44f7f6bb18e8b44da64b82ce53860a70ba8fd569bfc9e2102429fd9f18"},
{84500,"248dc0109433e91e3ce9ee32def3ceddd3d0d2655c0583973fbece0c45f3a4ed"},
{85000,"c6ce8a56ddaf311f4156a0c587c19fba783fa6474110819d6aaad6b6aff05fac"},
{85500,"974926742fec5b4a55e5b7b44c6c2b59ab8a95eab46c546395d3ce93274a7482"},
{86000,"3ca1c0d47e031b7e9aebf3ddbd61f99bde2bae9e8d2be56ae5e34cf2581e5f09"},
{86500,"9af1d3bd90ce39ff3122873837e11acdb51f1d36af3cb6c3810ccd1841bcc63a"},
{87000,"50fe61beeb837545881f690e1419d882ce657b5839594081d5916fdac4b9d70f"},
{87500,"59d14c993150228876ed11562a23b5ebcffbaf032dc1b80bf70126c96b569a29"},
{88000,"aba577bcfdf3c5297bf969d9c3c558a45a5d2f3fb28223352c311dc38ce0e934"},
{88500,"8a3827128e6fcb52a8373308ab03078fdcc9f4e03af51c0ec58b2dd1d527ef3d"},
{89000,"9560d5ff9487858f2a08ea4fa594fe939ef5605ab79569b586c0df445c45f55f"},
{89500,"d6485ff20a2f208e7779346af77261bc6fc0c4c80accc7c6379528b1bd7812fd"},
{90000,"e8d11168fe6a7e81b0c271edb6fcd596fd15f0587cdbeeace514fb9c674cd264"},
{90500,"16ed28e4e608784900b87ed1d2fc20383aaa6a2945d546107b7674767d7532f1"},
{91000,"56cf105060f56e1588413fceec4730b4a6916da0a9e43345f8ee2e4709d794a4"},
{91500,"f8c948339ef025014fdb1d4fd51977ee089ea41198c299a5c4e6752ba867611e"},
{92000,"f82239bb793ce4055d294d2cc477d29d53913fbb6bb23dd16c0caeec74b4e709"},
{92500,"530ad72ddce1a2d6ca1f73f2dbdfa995094d14b5774d83fa9fc975669e27adec"},
{93000,"4a0d3bbaaa7ab44fc8fd42387719ca66ae6ed87e45b9cee4181d727c3b39728b"},
{93500,"f81322ac2bf9ab5104e04bcb93dd92f05ae4d8ec1a0186ebbdf1c6bc25abace7"},
{94000,"3ede2ae44a5d043193b39280ae4ef7988683914c19f14b5b0b82275cd414932e"},
{94500,"bb8e3a274e5f1763d92cc92cafd5d2c5b13e0d2d33ba7a6f64ca89299433785a"},
{95000,"416adaedce225c5b828cf06d1f0a0b39dc2aa033042d0fb984535c805b576f80"},
{95500,"dd10ee4558a1581aca76a422494901643c699e94df17e46d6550471780c6a504"},
{96000,"d85e98002058d65e6e3465ad7093d6da709994a1b5e8eefceeb9a5fad2cfa756"},
{96500,"96a8689df5018d89e1369eba8466ffe640d2cb119d9ed1e501dcc2c8e7289887"},
{97000,"5ee14af91d1b623e11b3e176cebe9681b353c0b01dafeab7b5c046bdb72b744a"},
{97500,"bc0674cbb034748adf4690213b2976f61adb88a2a4b32661fc71e87c2bfd35fe"},
{98000,"895a56504e5ae5fa0b8a2ac39588eda3f6abc68fb578fe078591f79cb612b242"},
{98500,"c1e2bd6ef25e0f11986bcfb442e60d8232fb0d562f3e7daf504a4e74f0ef249e"},
{99000,"a8ea7c3bb08e83eba8f90f8b4695671928146c96203d9eacf94a940163cc9acd"},
{99500,"2752cfdb71cffbc6464331ada7cf27cee843d305e79a1ace8c8eeaec6d8b8fc0"},
{100000,"c0b404b934853ea85bef3ab4a7a7ef5b4ce44eb31c4678500f7daccf64b20cd2"},
{100500,"716f1dbe3d74c13174f7245311daf92fbdb715044bb8559d70cf1cc2fc9b9092"},
{101000,"35d82208037de138056a4e530b3629f7f2b66427db0f1b8f7562ab07caad6f66"},
{101500,"42c316a503aacddb693f47d2242f0667405874c5d4889e3f64f4b49ade4ecdf8"},
{102000,"ef745c72ed66c1da12e73cab839651c915db785081a268036a2d4d9660321b0a"},
{102500,"1e4934cd91b4398c0c5a9dcb01eec851a4430c76a02f2c51e488c36edfea3467"},
{103000,"fa2be00c8a2a71aec5693e60f13683e80fa810544b9af83e84888560167bc6b3"},
{103500,"ef51d130e7ff4f5773b0cd17874cca77a13916d12114e6f87a117923abe7256d"},
{104000,"edf4ac69cf3e31c3ffb6f8045d955b61ee7a8db2b768f9e1ce1cea99c4cf8edd"},
{104500,"bd75a8ae14bd2979b15a5479430152689937d03abc2018d0e93ffd1e1cf00e8d"},
{105000,"2dd0f3b7a8f26c19222b873e91594bf912fe52b1fa5bb5d952305d63a5b8561f"},
{105500,"d89af03d47ce3dacd666a3d05323f11195c6d3b24e0f327e079f0ead343ec23f"},
{106000,"698a94416e3aaddc4094a977f66a4e3164312d37d51c880b53e629983f226071"},
{106500,"92773a64d22f0b98daa87146e8f9982c5afb060322fe4e6fab781fda7dc2e576"},
{107000,"0acd3cba4a84303a8ea7d2962756687bfee5726f7415ee525c1fed563735e497"},
{107500,"ab209d391e0a86f1057a21198941f64d35a51a55f06757cc6caa5846437c4d04"},
{108000,"708511ae61dea1db48227a9d67b3e9184a3f3a8d9a903a4bbdedec18b24ac86e"},
{108500,"76f72d5ce7779b98f3bd0386dc1b7c39c0e674f792ddad1e8a89d04d29225057"},
{109000,"fcb7492246c1b5574fc468ae782ec03e016c11e7c7b3b5aee8d293d11f51f85f"},
{109500,"dbe9e17543b52aa3878ab5dceedbc6502b2a69fe3694ebc51b49e2096ba6055f"},
{110000,"62b3f55ef6ccbb3b5b54a419571698527e7f2f49e609a4b43001a0a7f5720cbd"},
{110500,"6d79b0b7f94c35730006d1e8aecc4989ff28297d89e76aa551cbf641c5dc5a70"},
{111000,"cf77569f78593ab319919fed026b19dfe601d01d4c5ea0b5af22f7b88cb66ce0"},
{111500,"2434d2b84ef21e65d69960338a3f5753896be2bee9399f2929ff647e931c91e7"},
{112000,"c5ad23e483c976575ca7daa3d902a96bd3b17ade8198627ed0fc669b919e26fa"},
{112500,"2ccaeca65cb574e445cd0ebf6330a285809ad1f262857ecb7f0a7d0a86468ec2"},
{113000,"6d43c46b4e5c3fa976c8321aca2bc5cb05d96b82dca2e47fe0fd066cd54d1c88"},
{113500,"79ea51ac9f4d41ebb22be78067fe9a68a6c536c18df2688b39f45a16d653a2c1"},
{114000,"0aabea02b7c535c357d0de41df0678b08692e5c012c40a55422779c91567da4d"},
{114500,"d74e230c5f8e423a56978b6b14925784e71f417a3f55a456f2f890c34cfafb05"},
{115000,"fcef00fe422f54fadb3937c671d55068bc478e14f5881355974122f4db049977"},
{115500,"4fa4194c46f2af1289578d35a0b6f10bad961235026ccd7b3c92a2f52daefbe7"},
{116000,"19645487ad21f3f3a918a4380abf485efeba09164e274ead555185b8f8c5648c"},
{116500,"29250502c05ab8873ea006ecda7eb276c3cfc97b024e83b97e9dc71621c35c4a"},
{117000,"ad69965327ecb59e51a4c86b72ceb8e4a58798b038acc3bf4c3ebf4dc9ecd81b"},
{117500,"219d1203bb0c989707689064654c89b747f47ca443e8249bad7ad32d516d02bd"},
{118000,"a13557b6abd8d30945b8f782f1e8d432b3d6b6066b08f5612b9f9f68a265c367"},
{118500,"6d685f6cc4d530fe1117d7b9a9295f44a9065994967de71131dfaf08419b96b5"},
{119000,"e1cb6990c7d3a0e3fe1f3615c96bd17d48fe5d8a2717bc32240c3445532428fd"},
{119500,"65d9a0ce3a7a1d4dea8294638216ed9f8f86bb84f541db7e2192436d4cce60cb"},
{120000,"a965139df58ddfda6d4ce77f2628d5e53eefebf826d4f91a4addfe82c6954304"},
{120500,"08eaa02f617ef522439fa2c9ee029e2003bd7c9246590360255f180f9dafb565"},
{121000,"db37fbd8f0f7552cb11fd7feec5ecc8ff33485cbf3d50d2fbb3df09af35f8af6"},
{121500,"5c62b97a92d33ab76ad1ca009b48462fec3af26c9cdeadbc790127db7dd7f146"},
{122000,"347c4b527d1ce6725c085efcf36e73c4cf4b63a54696feebc38faf80b50d159b"},
{122500,"47b0a46c415e47a0ab50355a0b31badd37284b2125be1295a43c27d84ef7bbb7"},
{123000,"b7d2e11dd0c8505b08da21725b77a8431a8909094f00a827cb3a7a78b0944c44"},
{123500,"d95bd17ea0083e0d61be059d143ecb604a3a7129f23761547b5f0ecbb0891960"},
{124000,"03243e44ddc91a6ab3e46af07053f222f9745abb33da45c2f99231007f7593bf"},
{124500,"16ca5ad69b4bdb1baccea4013e6b4a393832d937b08d9591901358a15f5c93f4"},
{125000,"71d163ee7e6e4a210736a38dda25deaa50b60e4e9f38577b7572417bc6edeb8f"},
{125500,"c589b639d8f3555139590ed03d2eeb7089bf100082f1661f15b8d84f5970d871"},
{126000,"a5a5694354c3380d586a74e75dd303570a9adbef876d60d7bef60c86d459c31c"},
{126500,"da571380f01fa84472286cf142218af07b86a759dcf0adad6fa9bc5789a07f9a"},
{127000,"a5e40e8c859d63b40b25cb56a1e113ce7dbac45049d2826cff6306de96eb7ee5"},
{127500,"313ad833680f1baef6f48972fdebde537e42d6ea3d697aea64065a92ff052f9c"},
{128000,"3df3e1a5074ed98ac2ca7ebc94b81823276c1d2ed5141ff3b6255f8d4836f712"},
{128500,"2aa862b06eecd720bb33012a3ad6019cbeb364378a909ef6c8b24ca021adae7e"},
{129000,"ad353fefa28171d04a9e10786cea49a105dcf7841edee9870346db574261c761"},
{129500,"f3ea2f3daedc22dc51707a9f863d0ca96c3bfc7c1ae512a7fcf1b2401e90ce6b"},
{130000,"823c5b0cb138c01c341a629a26c84eaabaab54bbfc32b610ad45a9de75dab7a7"},
{130500,"bfd01670a066db84178eee69753f2adb55dc90b82dee215bca4cab3baad1d695"},
{131000,"73ea93052a200a6f4907edad31cbd22b0328284292f20a0b6269366520f807d8"},
{131500,"17f6fa3e950e6fe10461bb252a2c42c81f6f70455584c6446944687ba1ecf079"},
{132000,"308a0280e8e22f184932a320c5d34b901fa1091dda57433a5f0a31ab49108d19"},
{132500,"5751e128786c0c074aed9df9b012a8afe9bb0b6cb45df7fa00c61485df0a2bb4"},
{133000,"db22675efb85b434c51a5304b0b824205c0b25d3b90f816d7121fef388cf5c9f"},
{133500,"191055bbe05c6b1d51480a413dbc4621d7131480b8e694237f9b41ead2a36389"},
{134000,"33923edd87ca3dc1255cd94eb3cba786c1a89b2bda0e243941ae50ab13c26ec3"},
{134500,"fffa254d488221be7cc49a82fe52072f15d7246a565eb911cd8f93c037a8b488"},
{135000,"847a4ff060a32294d80da5d308a72b8be2760cad5ddcad28762d59142ab5ba82"},
{135500,"1527c10c3607e858e056e05bafeef5f12f0ed3f4f826d797b4ab84f7f596321c"},
{136000,"3353bf2126e644cb9b10b03a017d48d869d6233cba911c54f9e15650eb369331"},
{136500,"66fda41586930698e14be4f104373ca51e298d1f07e1097712a28cca3c9a7047"},
{137000,"f66b69dda2fa32d9d2829f43e8e39b79818beccf3035849dc3b280457029a8a7"},
{137500,"fd9996c9c6450341d50f26e13abf565c6b169a8fda835c5b80e6b4aeb50b63c4"},
{138000,"c917c2c5f7c75f3c5cd320bed002ed315169294e17ac7b3a320ce286217586a4"},
{138500,"6a17975602a0f187372d0f420701646ad2541082103fbfdcd7d60294feb2b171"},
{139000,"93dd6cd37fd24bc039c9e7e39b780ec280ad1926a35dfd334d566acad74467f3"},
{139500,"7e8fef49288ff3374a72fca236f82af14f4e59691eb08a8f3fb5025d3935eef2"},
{140000,"24ba087fdd9df46a80ca71059f4d88555902b70a8c37110e31e7550f8d68ea9a"},
{140500,"eb370d67c3b9b73ef87188cc661448945614c6b7df142016ca93bbc90b91cc79"},
{141000,"37600256bee9aae76ba5ecc2c31a0bea1d7820f210876fb7b951d683e56e5b66"},
{141500,"b4174cce5298ae3f59d3399c2e314bf5127af563f0e00763b4b6bccd983ebdd9"},
{142000,"9119f9c7fe8a3761ec2f667c99ed995aaabf3466835b14b0d69649fe0e3869cd"},
{142500,"fd2e2a418235d41dc340907ed9aeaff5edcf69117ce5822fd81349ea139ecfeb"},
{143000,"833d4891cf75f6e7e90f4ee05a2b8a769986360e42e0472cb9cc76b16fb356ca"},
{143500,"e8c6e685ed73bd2720b9349327f9a3917bb6c8d6dd557b43c410aa20acad84f3"},
{144000,"a59cd0dadd0337a3d785dde321c8a2bf076b56dcd5b97eb45e3bc1e4e2780c2e"},
{144500,"44327a7d37bba2a04a16bb669a1688a175f062056022a0edc2a9799b4c24221e"},
{145000,"14aaea764fcd0e7df6627d8552005ee17f9bd759b82ef3406e6b36d7a5c20639"},
{145500,"8224af0243c411a2f94af6bbf1a66ce5ebfd9fb04a199f3449951bf9fe8f1af7"},
{146000,"490454e83bbc1e6c846c5823237d054685ab90f838f357dd873151f5e14f820f"},
{146500,"c4578bc9a2dcd7193e04d88d55516ccaa1cfbe1c7615ae104c45fad16bd88c4f"},
{147000,"b64796c22faed403e62ea15311ac9f9d7005e76b1ed4445b7ffdfe1f775609de"},
{147500,"b84814adab6d1b7a9735d579d391b1076db4cd6508122ec77c02476cf2b50e96"},
{148000,"4e1a62e8dd705d80dbbf9080de1e736b18a75ac82af1f4887cba6f63e821ac30"},
{148500,"e03b85df44cd39caf7e760b27894cf6ad3ea2315d31fe65c2d997550e11b10c2"},
{149000,"c9a1132ceccc85e64918cf7cfa9a3cdbcbb583472fa3b9629a6e327695de0054"},
{149500,"06c66607ee20b2901f52d7bcaf541da181006dc7188a7451f8f586ecc83df7f0"},
{150000,"3d6a24fd8b484882b81c636bd3b05fb0a6e00e7abed9052eef8b01c00d4dbf5c"},
{150500,"4dbe174106da6f4ac5557d236d47546b31b553c5e5e729d84f6100e95b860f87"},
{151000,"a42af8449bbfc9ea8e590eeb59a9d22a38d53cb231a0b8aee3d7ab8e28244d60"},
{151500,"bb4345617f9852cadc1e55e4a9d5a0f8df73944e37f4a861663bee0ad8c16012"},
{152000,"d3f45ffc763151fe0d8481d7b1e6e28e3fc28cb9e2018835ef55afeff1eb0890"},
{152500,"c0885aa2dd6dc547ff6af6fcea5064f1a88db065e3ffdc48c9adca7ddf65cc90"},
{153000,"2f58f7d966c1808bdb3abbf1f03f3ea99548001eb21a56571a4ecf085578b525"},
{153500,"8ac2287466640aa633b3a2786e35e2b114986df5b6aef471816c6f6d57199ab4"},
{154000,"397bbcd9a60385a796ca1e4d0d7bedc4b30f86d3d8077f41c8249caac3bc4d6c"},
{154500,"28e12aa220aab0e9a51dee5015628dfef253ced60f1b6006deec9ac3a9076392"},
{155000,"f630d0fca35475e7e105d9343e5d01deed098f7c000594c9c43a5a70d646fe5e"},
{155500,"afc22cd291806ec3477c3692eee1b3b282471543000d02a17c66b594e1f5f685"},
{156000,"ed6f84e483d1aa8f3ce01640b0dab35ca6ca95a6a62f332b37831d359267cdb8"},
{156500,"d44a289586c81cb93d71c43974505fa06548c13614c42ced2644cbf11a9439fc"},
{157000,"9dab8a68377bad64f791c5f1002e17bf8bb55065d182cbf5978ca443894b553a"},
{157500,"f0b7993045ea20fd0aadb7c27a434d016285167336e045f548f6cb61c43817cf"},
{158000,"e894d4edf50bf7fef75f8b59371c76407300d2f9d8dd49821504aceb7a077623"},
{158500,"916037ae23832c54a2d73231bfb5a39fd045b2f8c635e0bc058ca3ec3baa9a13"},
{159000,"648800a2e6ac8e090c486c14b5292783a41b346574080772023a1ec4b916ec3d"},
{159500,"f494426d14afb23569087df72b4e5a7d50fddbd7221025a2f922c9deeac83e00"},
{160000,"f6955bbc28399bb362ffc5573b13fba01276435e4a00b1f1ba79efa96b29a59a"},
{160500,"b097cb2b9c1930429d1b6c2b1025740a0e7cb055ee371b798c94c5d9f89c48e9"},
{161000,"76532475f5deb69c92418e74115512df330a13df8ebab381e728490734f78105"},
{161500,"b8fb35a62168fe711d9fd6e326f3be77604fc3db1be1fed5c88922b7c1c05732"},
{162000,"41251104bfb38d31b122d8da12c3b1c7654dc281136ae7ae50a18afd3e5852ab"},
{162500,"8ef641b1fa61826153e14be55f4fc718de7d95c0ee65d4560d177a9a96648891"},
{163000,"c3158fd0176a6cf88b65d0a33cdda5e0e134df751479fb4e2b192347170954fb"},
{163500,"2b720b7fe9e4eff76282afc85c63c368b543aa9197f5d0fa57852c06e0d06eb9"},
{164000,"3291452390a10648858e7323cfef1b2bdbfb50404ce26fc2e0a2762c62603fa7"},
{164500,"ab7d43fdcff931a73ff3702980ebacef080e1f2f1a152cdcf3f7d2b0dfdf0a99"},
{165000,"968822461755c9f1a66847181ad342f17d524bf56f1fa9c85855524f6cdae541"},
{165500,"651e40b8a8b4c44acc72ed39ccf3bfd504e9b7c536a0ac3bf85ff2ff8999195e"},
{166000,"7ee41adae2ab3d1ce5346fa98ae886bccdc186c8ebfae047cdc3f4cbba3a78a0"},
{166500,"f391cedea6d4d56004773140195a55906675b9217ff6ecfe492521691a1ae885"},
{167000,"33ad2ad7f1bc26825866238581af308f826d9483eb931fa55f72090299af4b48"},
{167500,"3a181ee70127eaa0ec2cf09266bb512ca706a3d8886271d5bbe9a15a826e660c"},
{168000,"3dc37d1ed73dade2367e887f4d00f4110d87da1ec02d6783f48fb3d49461f21f"},
{168500,"f5e3f9e80efafb79de541733f5fdb9a220f2e399bd5d50f6ad305a3d47a58642"},
{169000,"30c02ef87a29751271d3398576c05f40d775e4316f4b801d36e59e1e1921e273"},
{169500,"46edab70f7a224feb0b6fed7a30ca35e9da8c10067364e60b81e37687ea2ab49"},
{170000,"ce05c802ff014a4f06e546df7ce1593ef48aeb7e1dacb1b2674ab9e326fdd7c3"},
{170500,"80b1e6cb5dc8c01cb3d223133739c9d8045aec3911352296960b7e223fbb0abd"},
{171000,"c7b5e7d63e05ca26c61661359ea1d9e172419c2ddca3ab3e4c99f96e69b41643"},
{171500,"0550d48ff305829d998765c4d2a7e102337ef080fdb7b9bb20a62ca0fb6a2068"},
{172000,"82ad8cecd028099220d1b7e4c5d05395cf07d174d80fc3208784a18bfbf3bf0d"},
{172500,"1404761e68ec392ce1e01acba7c396c39e3d672f514d3a2b73945d76ac2cd88d"},
{173000,"4b310ea746921f273308e9c1f7fa57ccf99f1382e8dd876f5fe3e8835fec08d6"},
{173500,"57e8ed3b013993cd7d06fecd37a9741f29409611ee4fcb25b644b532a0423395"},
{174000,"9f3fcdad712b96cf7348dec9e9b24f908138a1b8afbd315d058e1bf8f1c2e9c7"},
{174500,"0b963215fc7b8dc21d695342ed5802b991aadcba0498bedc847fcae4441f43e5"},
{175000,"841bf1ea392e98fbfadc5f7ee11b952e95b25535f5837eb11170081c6ce6fec7"},
{175500,"243a9bb8a96a855cda183ed88f1bbbc05f2874176612a71ff5b004274b0e2bbd"},
{176000,"2dc7b468444dd6513b6a68d66a750a14938e34b5644310c031ecf41e49131ed1"},
{176500,"0ea7105611fad1348d8baffecd5598991dd91d4d20aa37172c34b940ffa40ce8"},
{177000,"497b370dabfb93c863e3118e82be054d5b100c39d4484ae8320c5821e364bb0f"},
{177500,"dff76263131b83b23bdd7067fc2b6f6a84464482471b85d333d6edcdce622fb9"},
{178000,"5270c2771be3fe180ae6c09e666ba689e7c25942246f12bed7692d7810de64dc"},
{178500,"a924e1c9adee2778dffda1ee4b98ad863aca1feed09b39f70c5afe992f5e7b06"},
{179000,"c3ae8a82cfd50d6ce871d3aa55922f905dd0887b9553d858545ae0e9cb061c3c"},
{179500,"193a66ee27f02a12e9e4210a052bbee49e84de6880bb42950f3e8eb6c39fe480"},
{180000,"d2f7d7efa331dfb9c9ce64f66fffa66a1f7382aa76c10c5a05a131e46b199933"},
{180500,"b543e43b75854378dbcf0981390f052fce4d691b9d27db229dff38b68103552f"},
{181000,"43f80a37be851e27a5498b5cd5316d3650c2284e0dd4e4108f00db91ea7c6e8a"},
{181500,"cce871adbee9226021219ddb0df5eb502b6125893da6e5053b4b89241e64d5ac"}
};
}
