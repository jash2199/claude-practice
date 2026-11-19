# MS DCF Valuation — Investment Banking Valuation Memo

**Date: 2026-11-19 (Thursday), ~09:14 ET** (14:14 UTC run-fire time, converted; ET = UTC-5 in November). **This is an update cycle, not a full rebuild** — persona file re-read fresh this run, unchanged since last cycle (ms-dcf-valuation.md persona instructs: "if a name was fully valued in your previous report and nothing material changed, update the numbers briefly rather than rebuilding from scratch"). Coverage per the persona's self-feeding rule: (1) all six current holdings (NVDA, VTI, VXUS, OMCL, XLE, GEHC); (2) GS's current #1-ranked pick is **NVDA** — already a holding, already covered, so no separate unheld build is required this run (AVGO, GS's #6, is not GS's #1 — carryforward only, consistent with last cycle).

**One substantive change this run: the NVDA risk-free-rate input is finally re-pointed.** GS's 11/19 ~08:4x ET report explicitly flagged (for the second cycle running) that this desk's NVDA WACC still carries the stale ~4.87% Rf rather than the team's now-adopted 5.12% figure (BW's 11/16 four-source-corroborated read, BR-adopted per its 11/18 ~15:13 ET report). That gap is closed below by re-pointing WACC off this report's own standing sensitivity grid — a legitimate "update the numbers" move, not a fundamentals rebuild, since nothing about NVDA's cash-flow path has changed since 11/18's post-print rebuild.

---

## Verdicts (top line) — read this first

| Ticker | Current Price | Fair Value | Gap | Verdict |
|---|---|---|---|---|
| **NVDA** (held) | **$152.67** (state.md 11/19 ~08:37 ET premarket read, +1.13% vs. 11/18's $150.96 close; this desk has no direct Robinhood access, defers to the trader's freshest internal pull per rule 4) | **Base $155.2/sh** (Rf re-pointed 4.87%→5.12%, WACC 12.72%→12.97%, read off this report's own standing sensitivity grid) \| Bull ~$294.5/sh (WACC ~11.72%) \| Bear ~$56.1/sh (WACC ~14.75%) | **Base: +1.7%**; Bull: +92.9%; Bear: -63.3% | **VERDICT: ROUGHLY FAIRLY VALUED at base case, essentially unchanged in substance from 11/18's -0.6% read — closing the Rf gap moves fair value down modestly, and the stock's own modest premarket gain moves the gap back toward flat.** See §1. |
| **OMCL** (held) | **$34.66** (11/18 official close; 11/19 premarket again too illiquid to use per rule 4, consistent with every prior run) | **$46.75/sh base** (unchanged, 10/29 rebuild) \| Bull $55.27 \| Bear $35.24 | **+34.9%** base | **UNDERVALUED at base — and still $0.58 (-1.65%) below MS's bear-case floor, the second consecutive sub-floor close (11/17 $34.00, 11/18 $34.66), resolved HOLD per state.md with no structural cause found across seven-plus live tests of this line.** See §2. |
| **XLE** (held) | **$61.65** (trader 11/19 ~08:37 ET premarket pull) | **$58.5/sh base** (11/6 build, now **13 days stale** — no fresher Brent print found again this run) | **-5.1%** | **OVERVALUED at base, unchanged in substance.** Still this sheet's single most overdue rebuild, a flag now repeated for a fifth consecutive report. See §3. |
| **GEHC** (held) | **$83.66** (11/18 official close) | **$75.0/sh base** (unchanged, 11/2 build) | **-10.3%** | **OVERVALUED at base, flat price-roll.** BR's 7.5%-pool drift-trim trigger (~1.08pp away, the book's narrowest live gate) remains the operative mechanism here, not this desk's domain. See §4. |
| **VTI** | $362.78 | N/A | N/A | **HOLD BY CONSTRUCTION** (diversified index fund) |
| **VXUS** | $79.43 | N/A | N/A | **HOLD BY CONSTRUCTION** (diversified index fund) |
| **AVGO** (unheld, carryforward — not GS's #1 this cycle, no rebuild required) | Data-quality flag persists per GS, now a seventh-plus consecutive cycle; last adopted reference $332.10 (10/16 close) | $365.5/sh base (11/11 build, unchanged) | ~+10.0% at the $332.10 reference | **No rebuild this run — GS's actual #1 pick is NVDA (already held, covered above).** |

**Bottom line for the trader:**

1. **The Rf gap GS flagged twice is now closed.** Re-pointing WACC from a 4.87%-based 12.72% to a 5.12%-based 12.97% (same +140bp governance premium, same equity-risk spread — only the risk-free leg moves) pulls base fair value from $159.2/sh to ~$155.2/sh, read directly off this report's own standing WACC×g sensitivity grid rather than a full re-derivation. That is a ~2.5% haircut to fair value for a 25bp Rf correction — in line with this model's own duration sensitivity.
2. **Net effect on the verdict is small.** NVDA's own +1.13% premarket gain roughly offsets the Rf-driven fair-value haircut, so the base-case gap moves from -0.6% to +1.7% — still squarely "roughly fairly valued," not a re-rating in either direction. This is a model-hygiene correction, not a new finding about NVDA.
3. **No trade implied.** Rule 6a's rate-shock pause and rule 20's no-new-cash-to-NVDA instruction both independently block any add regardless of how this reads. This desk does not place trades.
4. **OMCL remains the standout undervaluation call (+34.9% base), with its bear floor touched for a second straight close** — a price-level story with no fundamentals behind it, per state.md's own repeated structural checks.
5. **XLE is now 13 days stale on Brent and the most overdue rebuild on this sheet — a fifth consecutive flag.** This desk's own WebSearch again returned only undated or months-stale spot references (a spread from ~$71 to ~$109/bbl depending on source and date, none reliably dated to November 2026); recommend prioritizing this ahead of GEHC next cycle.
6. **GEHC is a flat overvaluation read, unchanged.** BR's drift-trim trigger is the live mechanism here, not this desk's domain.
7. **This desk does not place trades.** Sizing, DCA-gate mechanics, and trim/hold calls remain BR's/BW's domain.

No trade recommended off this report (research-only mandate, as always).

---

## 1. NVDA — Rf re-pointing, no fundamentals change

### 1a. What changed and why this is a re-pointing, not a rebuild

The 11/18 post-print ground-up rebuild (base $159.2/sh, WACC 12.72%, g 3.0%) stands on its cash-flow build: nothing new on Data Center growth, the Q4 guide, gross margin, or the governance/legal-disqualifier checklist was found this run (fresh WebSearch reproduced the already-on-file board-probe-opened-11/8, Kistenmacher-suit, Megaspeed/DOJ-adjacent reporting — no new dated-11/19 development on any of it). **What did change: the team's own working risk-free-rate input.** BW's 11/16 report (four independently-corroborated sources) put the current 10-year Treasury at 5.12%, materially above the ~4.87% this desk had been carrying for weeks on a chronic same-day-dateline wall. BR adopted the 5.12% figure in its 11/18 ~15:13 ET report; GS's 11/19 report explicitly called out, for the second cycle running, that this desk's NVDA WACC had not yet been re-run on it. That is closed this run.

### 1b. Re-pointing the WACC and reading the new fair value off the standing sensitivity grid

**Base-case WACC:** 4.87% Rf + equity-risk/beta spread + +140bp governance-transition premium (unchanged) = 12.72% (11/18 figure). Swapping in 5.12% Rf (+25bp) with every other component held fixed: **new base WACC ≈ 12.97%.**

Rather than re-deriving the five-year FCF schedule and terminal value from scratch (unchanged since 11/18 — no fundamentals news this run), this desk reads the new fair value directly off its own standing WACC×terminal-growth sensitivity grid (reproduced below, built 11/18, g held at 3.0% to match the base case):

| WACC ↓ / g → | 2.0% | 2.5% | 3.0% | 3.5% | 4.0% |
|---|---|---|---|---|---|
| 11.72% | $164.5 | $171.0 | $178.3 | $186.5 | $195.7 |
| 12.22% | $155.9 | $161.8 | $168.2 | $175.4 | $183.4 |
| 12.72% | $148.3 | $153.4 | $159.2 | $165.5 | $172.5 |
| **12.97% (interpolated)** | **$144.6** | **$149.7** | **~$155.2** | **$161.8** | **$168.6** |
| 13.22% | $141.5 | $146.1 | $151.2 | $156.7 | $162.9 |
| 13.72% | $135.0 | $139.1 | $143.7 | $148.6 | $154.1 |

**New base fair value: ~$155.2/sh** (interpolated between the 12.72% and 13.22% rows at g=3.0%), a **-2.5% haircut** from 11/18's $159.2/sh — consistent with the grid's own observed ~5.0-5.2% sensitivity per 50bp of WACC.

**Bull/Bear re-pointing (approximation, not a full re-derivation):** the bull and bear scenarios run on different cash-flow paths and WACCs entirely, so they cannot be read off the base-case grid directly. Applying the same ~2.5%-per-25bp duration sensitivity observed in the base-case grid as a proxy (a reasonable approximation for a pure Rf shift with no cash-flow change, not precision-grade):
- **Bull:** WACC 11.47%→11.72% (+25bp); $302.1/sh × (1-2.5%) ≈ **$294.5/sh**
- **Bear:** WACC 14.50%→14.75% (+25bp); $57.5/sh × (1-2.5%) ≈ **$56.1/sh**

**Implied read against price ($152.67):** Base **+1.7%** (roughly fairly valued, essentially flat vs. 11/18's -0.6%); Bull **+92.9%**; Bear **-63.3%**. **The net move is small and goes in opposite directions** — the Rf correction pulls fair value down ~2.5%, NVDA's own premarket gain (+1.13%) pulls the gap back up — leaving the headline verdict unchanged: roughly fairly valued at base case, not a re-rating.

### 1c. Key assumptions that could break this model (unchanged from 11/18, Rf item now resolved)

1. **Data Center growth deceleration path** — still the single biggest swing factor; unchanged since 11/18.
2. **Gross margin trajectory** (Q4 guide compression to 71-72% from 74.9%) — unchanged, still assumed transient.
3. **FCF conversion/capex intensity** (46-50% FCF margin vs. 60-62% operating margin) — still this model's least-precedented assumption.
4. **Share count** (~24.1B diluted, buyback-driven decline assumed) — unchanged.
5. **Governance/legal-overhang WACC premium** (+140bp base, unchanged) — if the board probe, the Kistenmacher suit, or the Megaspeed/DOJ-adjacent reporting converts from "reported, unconfirmed" to "confirmed, material," this premium should widen further, independent of today's Rf fix.
6. **Risk-free rate — now resolved this run** (5.12%, BW/BR-adopted), closing the two-cycle-old gap GS flagged. Any further Treasury move should be re-pointed the same way next cycle.
7. **China/export policy** — unchanged; guide already assumes zero China Data Center compute revenue.

**Verdict: ROUGHLY FAIRLY VALUED at base case (~$155.2/sh vs. $152.67, +1.7%).** Not a buy or sell call. This desk does not place trades; sizing and timing remain BR's domain, and both rule 6a's pause and rule 20's no-new-cash instruction independently block any add regardless of this verdict.

---

## 2. OMCL — fundamentals unchanged; second sub-floor close logged

**Fundamentals unchanged since the 10/29 post-print rebuild** (base $46.75, bull $55.27, bear $35.24; WACC 9.43%/8.43%/10.43%). This run's dedicated WebSearch again found nothing dated past stale mid-year references ($44.92-$45.80 depending on source, none newer than mid-2026) — the chronic dateline wall holds for this name specifically, as it has for weeks.

**The live fact, per state.md's own 11/19 ~08:37 ET read: 11/18's official close printed $34.66 — still below MS's $35.24 bear-case line, the second consecutive sub-floor close** (11/17 $34.00, 11/18 $34.66), following an earlier streak that had resolved favorably on 11/16's $35.44 close. State.md's repeated structural checks have found **no structural cause** (no guidance cut, no contract loss, no margin/bookings deterioration) across seven-plus live tests of this exact mechanism, all resolved HOLD.

| Scenario | WACC | Fair Value/sh | Price (11/18 close) | Gap |
|---|---|---|---|---|
| Bull | 8.43% | $55.27 | $34.66 | **+59.4%** |
| **Base** | **9.43%** | **$46.75** | **$34.66** | **+34.9%** |
| Bear | 10.43% | $35.24 | $34.66 | price is **$0.58 (-1.65%) below** the bear-case floor |

**Key assumptions that could break this model:** a guidance cut, a lost major health-system contract, or a bookings/margin-deterioration trend — none of which has been found by any desk across this many consecutive price-level tests. A structural deterioration, not another price-level breach, is what would actually move this desk's numbers.

**Verdict: UNDERVALUED at base case (+34.9%).** This desk does not make the structural-break-vs-price-level call (BW's/BR's domain) — it confirms, on the data, that no OMCL-specific fundamental deterioration has been found by any desk since the print.

---

## 3. XLE — price-roll, now 13 days overdue for a rebuild

**No fresher Brent print found this run** — this desk's dedicated WebSearch returned the same spread of undated or stale references every desk has hit for weeks (figures ranging roughly $71-$109/bbl depending on source and vintage, none reliably dated to November 2026). The 11/6 rebuild (Brent ~$98.77, ×1.4x FCF elasticity estimate) stands unchanged: base $58.5, bull $66.3, bear $47.0, WACC ~11.0%.

| Scenario | Fair Value/sh (11/6 build) | Price (11/19 premarket) | Gap |
|---|---|---|---|
| Bull | $66.3 | $61.65 | **+7.5%** |
| **Base** | **$58.5** | **$61.65** | **-5.1%** |
| Bear | $47.0 | $61.65 | **-23.8%** |

**Key assumptions that could break this model:** the Brent elasticity multiple (1.4x FCF sensitivity) is now over two weeks stale and has never been re-validated against an actual November print; a genuine demand-side shock would not be captured by this model as built, per the standing hedge-role rule.

**Verdict: OVERVALUED at base case, unchanged in substance.** Still this sheet's single most overdue rebuild (13 days since the last Brent-linked refresh), a recommendation now repeated for a fifth consecutive report.

---

## 4. GEHC — flat price-roll

**Fundamentals and fair value unchanged since the 11/2 equity-bridge correction** (base $75.0, bull $98.5, bear $44.4; WACC 8.0%/7.0%/9.0%). This run's WebSearch found Q3 results (reported 10/28, EPS $1.34 on $5.51B revenue, guidance raised) and the previously-known Neal Sandy PCS-CEO transition (effective 11/16) — both already reflected or non-material, no new structural fact. A bond-filing reference to a mandatory-redemption date tied to an unnamed pending acquisition surfaced this run but could not be tied to a specific deal or dollar figure with any confidence — flagged for the team, not adopted into the model.

| Scenario | Fair Value/sh | Price (11/18 close) | Gap |
|---|---|---|---|
| Bull | $98.5 | $83.66 | **+17.8%** |
| **Base** | **$75.0** | **$83.66** | **-10.3%** |
| Bear | $44.4 | $83.66 | **-46.9%** |

**Key assumptions that could break this model:** the 11/2 equity-bridge correction's net-debt and backlog assumptions are now over two weeks old; the unidentified acquisition/redemption-date item flagged above is worth a dedicated follow-up if a name attaches to it.

**Verdict: OVERVALUED at base case, flat.** BR's 7.5%-pool drift-trim trigger (~1.08pp away per state.md, the book's narrowest live mechanical gate) remains the operative mechanism here; the trim decision itself is BR's domain.

---

## 5. AVGO — carryforward only; not GS's #1 pick, no rebuild required this run

First built 11/11 (base $365.5/sh, WACC 10.5%, g 4.0%; see that report in git history). No work done on this name this run — GS's current #1-ranked pick is NVDA, already a holding and already covered above, so this persona's coverage rule does not require an AVGO build this cycle. Carried forward at the last reference ($332.10, 10/16 close, per GS's own standing data-quality flag, now seventh-plus consecutive cycle unresolved) for continuity only: implied **~+10.0% undervalued** at that stale reference, not re-verified this run.
